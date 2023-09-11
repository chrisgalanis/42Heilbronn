/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:02:38 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/18 08:48:04 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	buffer[10];
	char	temp[10];
	int		length;
	int		temp_length;

	length = 0;
	while (nb != 0)
	{
		temp[length] = '0' + (nb % 10);
		nb /= 10;
		length++;
	}
	temp_length = 0;
	while (temp_length < length)
	{
		buffer[temp_length] = temp[length - temp_length -1];
		temp_length++;
	}
	if (nb < 0)
	{
		write(1, '-', 1);
		write(1, buffer, length);
	}
	else
		write(1, buffer, length);
}
