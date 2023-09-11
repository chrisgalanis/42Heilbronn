/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:53:45 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/23 11:02:06 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	c;	
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		c = str[counter];
		if (c < 'A' || c > 'Z')
			return (0);
		counter++;
	}
	return (1);
}

// #include<stdio.h>
// int main()
// {
	// printf("%d",ft_str_is_uppercase(""));
	// return 0;
// }