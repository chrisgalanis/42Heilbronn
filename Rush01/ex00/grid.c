/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:55:03 by jlohmull          #+#    #+#             */
/*   Updated: 2023/08/27 23:55:40 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include "print.h"
#include <stdlib.h>

void	create_grid(t_grid *grid)
{
	int	count;

	count = 0;
	grid->array = (int **) malloc(grid->height * 64);
	while (count < grid->height)
		grid->array[count++] = (int *)malloc(4 * grid->width);
}

void	print_grid(t_grid grid)
{
	int	count_w;
	int	count_c;

	count_w = 0;
	while (count_w < grid.height)
	{
		count_c = 0;
		while (count_c < grid.width)
		{
			print_digit(grid.array[count_w][count_c++]);
			if (count_c != grid.width)
				print(" ");
		}
		print("\n");
		count_w++;
	}
}
