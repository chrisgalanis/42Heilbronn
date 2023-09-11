/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:18:13 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/28 00:02:40 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "combs.h"
#include "weights.h"
#include "grid.h"

void	get_valid_combinations(t_grid *rows, t_weights given_weights,
	int combinations[][4])
{
	t_weights	weights;
	int			i;
	int			comb;

	rows->width = 4;
	rows->height = 6;
	create_grid(rows);
	weights.left_or_up = given_weights.left_or_up;
	i = 0;
	comb = 0;
	while (i < 24)
	{
		get_weights(&weights, combinations[i]);
		if (given_weights.left_or_up == weights.left_or_up
			&& given_weights.right_or_down == weights.right_or_down)
		{
			rows->array[comb] = combinations[i];
			comb++;
		}
		i++;
	}
}

int	is_combination_valid(t_grid combination,
	t_weights weights, int combinations[][4])
{
	int		i;
	int		j;
	t_grid	valid_rows;

	get_valid_combinations(&valid_rows, weights, combinations);
	i = 0;
	while (i < valid_rows.height)
	{
		j = 0;
		while (j < valid_rows.width)
		{
			if (valid_rows.array[i][j] == combination.array[0][j])
			{
				if (j == valid_rows.width - 1)
					return (1);
				j++;
			}
			else
				break ;
		}
		i++;
	}
	return (0);
}

int	is_grid_valid(t_grid *grid, int input[][4], int combinations[][4])
{
	t_grid		column;
	t_weights	weights;
	int			i;
	int			j;

	i = 0;
	column.width = grid->height;
	column.height = 1;
	create_grid(&column);
	while (i < grid->height)
	{
		j = 0;
		while (j < column.width)
		{
			column.array[0][j] = grid->array[j][i];
			j++;
		}
		weights.left_or_up = input[0][i];
		weights.right_or_down = input[1][i];
		if (!is_combination_valid(column, weights, combinations))
			return (0);
		i++;
	}
	return (1);
}

void	get_valid_row_counts(t_grid *valid_row_counts, t_grid grid,
		int input[][4], int combinations[][4])
{
	int			row;
	t_weights	weights;
	t_grid		valid_rows;

	(*valid_row_counts).width = grid.height;
	(*valid_row_counts).height = 1;
	create_grid(valid_row_counts);
	row = 0;
	while (row < grid.height)
	{
		weights.left_or_up = input[2][row];
		weights.right_or_down = input[3][row];
		get_valid_combinations(&valid_rows, weights, combinations);
		(*valid_row_counts).array[0][row] = valid_rows.height;
		row++;
	}
}
