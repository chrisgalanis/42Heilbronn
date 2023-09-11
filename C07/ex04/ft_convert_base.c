/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:25:51 by cgalanis          #+#    #+#             */
/*   Updated: 2023/09/05 19:31:16 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_atoi_base(char *str, char *base, int *sign);
int	find_radix(char *base);

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

int	conv_rev_number(long number, char *buffer, char *base, int radix)
{
	int	index;

	index = 0;
	if (number == 0)
	{
		buffer[0] = base[0];
		return (1);
	}
	while (number != 0)
	{
		buffer[index] = base[number % radix];
		number /= radix;
		index++;
	}
	buffer[index] = '\0';
	reverse_buffer(buffer, index);
	return (index);
}

void	ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != 0)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
}

char	*ft_putnbr_base(char *new_nbr, long nbr, char *base, int sign)
{
	char	buffer[33];
	int		size;
	int		is_edge_case;
	int		base_num;
	int		index;

	is_edge_case = 0;
	base_num = find_radix(base);
	if (base_num == -1)
		return (NULL);
	size = conv_rev_number(nbr, buffer, base, base_num);
	index = 0;
	if (sign == -1)
		new_nbr[index++] = '-';
	ft_strcpy(new_nbr + index, buffer);
	return (new_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	int		temp;
	int		size_num;
	int		sign;

	sign = 1;
	number = ft_atoi_base(nbr, base_from, &sign);
	if (number < 0)
	{
		number *= -1;
		sign = -1;
	}	
	size_num = 0;
	temp = number;
	while (temp != 0)
	{
		size_num++;
		temp /= 10;
	}
	nbr = (char *)malloc(size_num + 2);
	nbr = ft_putnbr_base(nbr, number, base_to, sign);
	if (nbr == NULL || number == -1)
		return (NULL);
	return (nbr);
}
