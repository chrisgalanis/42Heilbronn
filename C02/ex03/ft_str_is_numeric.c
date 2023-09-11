/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:29:45 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/23 14:06:42 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	c;	
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		c = str[counter];
		if (c < '0' || c > '9')
			return (0);
		counter++;
	}
	return (1);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%d", ft_str_is_number(""));	
// }