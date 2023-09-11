/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:17:53 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/28 00:04:25 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_H
# define GRID_H

typedef struct s_grid
{
	int	height;
	int	width;
	int	**array;
}	t_grid;

void	create_grid(t_grid *grid);
void	print_grid(t_grid grid);

#endif