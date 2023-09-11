/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weights.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:55:03 by jlohmull          #+#    #+#             */
/*   Updated: 2023/08/27 23:32:42 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weights.h"

void	get_weights(t_weights *weights, int *arr)
{
	int	index;
	int	max_pillar_top;
	int	max_pillar_bottom;

	index = 0;
	max_pillar_top = 0;
	max_pillar_bottom = 0;
	weights->left_or_up = 0;
	weights->right_or_down = 0;
	while (index <= 3)
	{
		if (arr[index] > max_pillar_top)
		{
			max_pillar_top = arr[index];
			weights->left_or_up++;
		}
		if (arr[3 - index] > max_pillar_bottom)
		{
			max_pillar_bottom = arr[3 - index];
			weights->right_or_down++;
		}
		index++;
	}
}
