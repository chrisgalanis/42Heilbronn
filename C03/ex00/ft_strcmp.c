/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:23:57 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/27 11:06:24 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	if (s1[counter] != '\0')
		return (s1[counter]);
	else if (s2[counter] != '\0')
		return (-1 * s2[counter]);
	return (0);
}

// #include<stdio.h>
// #include<string.h> 
// int main()
// {
// 	char st1[15] = "BBB";
// 	char st2[15] = "BBBA";
// 	printf("%d ",strcmp(st1,st2));
// 	printf("%d", ft_strcmp(st1,st2));
// 	return 0;
// }