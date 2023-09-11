/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridcheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:55:03 by jlohmull          #+#    #+#             */
/*   Updated: 2023/08/28 00:20:09 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weights.h"
#include "combs.h"
#include "grid.h"
#include "gridcheck.h"

void	get_grid_from_row_indices(t_grid *grid, int input[][4],
		t_grid chosen_row_indices, int combinations[][4])
{
	int			row;
	int			column;
	t_weights	weights;
	t_grid		valid_rows;

	create_grid(grid);
	row = 0;
	while (row < (*grid).height)
	{
		weights.left_or_up = input[2][row];
		weights.right_or_down = input[3][row];
		get_valid_combinations(&valid_rows, weights, combinations);
		column = 0;
		while (column < valid_rows.width)
		{
			(*grid).array[row][column] = valid_rows.array
			[chosen_row_indices.array[0][row]][column];
			column++;
		}
		row++;
	}
}

t_grid	get_valid_grid(t_grid *grid, int input[][4],
			int combinations[][4], int *error)
{
	t_grid	valid_row_counts;
	t_grid	current_row_indices;
	int		i0;
	int		i1;
	int		i2;
	int		i3;

	current_row_indices.height = 1;
	current_row_indices.width = 4;
	create_grid(&current_row_indices);
	i0 = 0;
	get_valid_row_counts(&valid_row_counts, *grid, input, combinations);
	while (i0 < valid_row_counts.array[0][0])
	{
		i1 = 0;
		while (i1 < valid_row_counts.array[0][1])
		{
			i2 = 0;
			while (i2 < valid_row_counts.array[0][2])
			{
				i3 = 0;
				while (i3 < valid_row_counts.array[0][3])
				{
					current_row_indices.array[0][0] = i0;
					current_row_indices.array[0][1] = i1;
					current_row_indices.array[0][2] = i2;
					current_row_indices.array[0][3] = i3;
					get_grid_from_row_indices(grid, input,
						current_row_indices, combinations);
					if (is_grid_valid(grid, input, combinations))
						return (*grid);
					i3++;
				}
				i2++;
			}
			i1++;
		}
		i0++;
	}
	*error = -1;
	return (*grid);
}
