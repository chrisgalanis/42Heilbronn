/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:55:03 by jlohmull          #+#    #+#             */
/*   Updated: 2023/08/28 00:26:40 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMBS_H
# define COMBS_H

# include "grid.h"
# include "weights.h"

void	get_valid_combinations(t_grid *rows, t_weights given_weights,
			int combinations[][4]);
int		is_combination_valid(t_grid combination, t_weights weights,
			int combinations[][4]);
int		is_grid_valid(t_grid *grid, int input[][4], int combinations[][4]);
void	get_valid_row_counts(t_grid *valid_row_counts, t_grid grid,
			int input[][4], int combinations[][4]);

#endif