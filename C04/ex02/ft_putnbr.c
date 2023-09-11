/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:02:38 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/29 10:46:01 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	reversed_number(int number, char *buffer)
{
	int	length;

	length = 0;
	if (number == 0)
	{
		buffer[length] = '0';
		return (1);
	}	
	while (number != 0)
	{
		buffer[length] = '0' + (number % 10);
		number /= 10;
		length++;
	}
	buffer[length] = '\0';
	return (length);
}

void	reverse_buffer(char *buffer, int length)
{
	int	index;
	int	temp;

	index = 1;
	while (index < length)
	{
		temp = buffer[index - 1];
		buffer[index - 1] = buffer[length - 1];
		buffer[length - 1] = temp;
		index++;
		length--;
	}
}

void	ft_putnbr(int nb)
{
	char	buffer[12];
	int		length;
	int		is_negative;

	is_negative = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}	
	else if (nb < 0)
	{
		nb = -1 * nb;
		is_negative = 1;
	}
	length = reversed_number(nb, buffer);
	reverse_buffer(buffer, length);
	if (is_negative == 1)
	{
		write(1, "-", 1);
	}
	write(1, buffer, length);
}

// int main()
// {
// 	ft_putnbr(-42);
// 	//ft_putnbr(INT_MAX);
// }