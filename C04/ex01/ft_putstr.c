/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:25:38 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/28 20:08:50 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
		write(1, &str[size++], 1);
}

// int main(void)
// {
//  	ft_putstr("0");
// }