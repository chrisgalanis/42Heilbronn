/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:17:53 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/28 00:38:05 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include "gridcheck.h"
#include "print.h"

#include <stdio.h>

void	read_input(int arr[4][4], char *string, int *error)
{
	int	rows;
	int	columns;

	rows = 0;
	while (*string != '\0')
	{
		columns = 0;
		while (columns < 4)
		{
			if (*string == ' ')
			{
				string++;
				continue ;
			}
			if (*string >= '1' && *string <= '4')
				arr[rows][columns] = *string - '0';
			else
				*error = -1;
			string++;
			columns++;
		}
		rows++;
	}
}

int	main(int argc, char **argv)
{
	int		error;
	int		input[4][4];
	t_grid	grid;
	int		combinations[24][4] = {{1, 2, 3, 4}, {1, 2, 4, 3}, {1, 3, 2, 4},
	{1, 3, 4, 2}, {1, 4, 2, 3}, {1, 4, 3, 2}, {2, 1, 3, 4}, {2, 1, 4, 3},
	{2, 3, 1, 4}, {2, 3, 4, 1}, {2, 4, 1, 3}, {2, 4, 3, 1}, {3, 1, 2, 4},
	{3, 1, 4, 2}, {3, 2, 1, 4}, {3, 2, 4, 1}, {3, 4, 1, 2}, {3, 4, 2, 1},
	{4, 1, 2, 3}, {4, 1, 3, 2}, {4, 2, 1, 3}, {4, 2, 3, 1}, {4, 3, 1, 2},
	{4, 3, 2, 1}};

	error = 0;
	if (argc != 2)
		error = -1;
	if (error)
	{
		print("Error\n");
		return (0);
	}
	read_input(input, argv[1], &error);
	if (error)
	{
		print("Error\n");
		return (0);
	}
	grid.height = 4;
	grid.width = 4;
	create_grid(&grid);
	get_valid_grid(&grid, input, combinations, &error);
	if (error)
	{
		print("Error\n");
		return (0);
	}
	print_grid(grid);
	return (0);
}
