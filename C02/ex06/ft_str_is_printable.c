/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:58:12 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/23 11:00:09 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char	c;	
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		c = str[counter];
		if (c < 32 || c > 127)
			return (0);
		counter++;
	}
	return (1);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%d",ft_str_is_printable("/127"));
// 	return 0;
// }