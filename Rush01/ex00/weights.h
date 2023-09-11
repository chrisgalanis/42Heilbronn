/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weights.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:17:53 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/27 23:54:54 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEIGHTS_H
# define WEIGHTS_H

typedef struct s_weights
{
	int		left_or_up;
	int		right_or_down;
}	t_weights;

void	get_weights(t_weights *weights, int *arr);

#endif