/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:32:13 by cgalanis          #+#    #+#             */
/*   Updated: 2023/09/05 08:28:37 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	index;

	size = max - min;
	if (size < 0 || max == min)
	{
		*range = NULL;
		return (0);
	}	
	*range = malloc(size * sizeof(int));
	index = 0;
	while (index < size)
	{
		(*range)[index] = min + index;
		index++;
	}
	return (size);
}

// #include <stdio.h>
// int main()
// {
// 	int *range = NULL;
// 	printf("%d\n", ft_ultimate_range(&range, 0, 5));
// }