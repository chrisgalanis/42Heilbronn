/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:36:01 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/30 19:18:00 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<errno.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		size_src;
	int		index;

	size_src = 0;
	while (src[size_src] != '\0')
		size_src++;
	cpy = (char *)malloc(size_src * 1);
	if (cpy == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	index = 0;
	while (src[index] != '\0')
	{
		cpy[index] = src[index];
		index++;
	}
	cpy[index] = '\0';
	return (cpy);
}
