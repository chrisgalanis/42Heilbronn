/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:50:27 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/23 11:01:48 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char	c;	
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		c = str[counter];
		if (c < 'a' || c > 'z')
			return (0);
		counter++;
	}
	return (1);
}

// #include<stdio.h>
// int main()
// {
	// printf("%d",ft_str_is_lowercase(""));
	// return 0;
// }