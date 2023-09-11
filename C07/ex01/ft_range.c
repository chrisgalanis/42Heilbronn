/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:18:38 by cgalanis          #+#    #+#             */
/*   Updated: 2023/09/05 08:29:50 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	index;

	size = max - min;
	if (size < 0 || max == min)
		return (NULL);
	arr = (int *)malloc(size * 4);
	index = 0;
	while (index < size)
	{
		arr[index] = min + index;
		index++;
	}
	return (arr);
}
