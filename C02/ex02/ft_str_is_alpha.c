/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:01:11 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/26 11:42:33 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	c;	
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		c = str[counter];
		if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
			return (0);
		counter++;
	}
	return (1);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%d",ft_str_is_alpha("Hell!"));
// }