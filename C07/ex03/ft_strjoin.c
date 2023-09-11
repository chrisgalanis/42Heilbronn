/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:49:08 by cgalanis          #+#    #+#             */
/*   Updated: 2023/09/07 17:01:58 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	new_string_size(char **strs, int size, char *sep)
{
	int		index;
	int		jndex;
	int		sep_size;
	int		strs_size;

	sep_size = 0;
	index = 0;
	strs_size = 0;
	while (sep[sep_size] != '\0')
		sep_size++;
	while (index < size)
	{
		jndex = 0;
		while (strs[index][jndex] != '\0')
			jndex++;
		strs_size += jndex;
		index++;
	}
	return (strs_size + sep_size);
}

void	cpystrs(char **strs, char **str, int *index, int count)
{
	int	jndex;

	jndex = 0;
	while (strs[count][jndex] != '\0' )
	{
		(*str)[*index] = strs[count][jndex];
		jndex++;
		(*index)++;
	}
}

void	cpysep(char *sep, char **str, int *index)
{
	int	sndex;

	sndex = 0;
	while (sep[sndex] != '\0')
	{
			(*str)[*index] = sep[sndex];
			(*index)++;
			sndex++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		count;
	int		index;
	int		new_size;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	new_size = new_string_size(strs, size, sep);
	str = (char *)malloc(new_size + 1);
	index = 0;
	count = 0;
	while (count < size)
	{
		cpystrs(strs, &str, &index, count);
		if (count != size - 1)
			cpysep(sep, &str, &index);
		count++;
	}
	str[index] = '\0';
	return (str);
}
