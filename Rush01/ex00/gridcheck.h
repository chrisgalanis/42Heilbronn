/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridcheck.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 00:04:53 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/28 00:26:54 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRIDCHECK_H
# define GRIDCHECK_H

# include "grid.h"
# include "weights.h"

void	get_grid_from_row_indices(t_grid *grid, int input[][4],
			t_grid chosen_row_indices, int combinations[][4]);
t_grid	get_valid_grid(t_grid *grid, int input[][4],
			int combinations[][4], int *error);

#endif
