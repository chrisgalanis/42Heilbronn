/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:28:52 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/29 16:43:45 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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

int	conv_rev_number(int number, char *buffer, char *base, int radix)
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

int	find_radix(char *base)
{
	int		size;
	int		index;
	char	c;

	size = 0;
	while (base[size] != '\0')
	{
		if (base[size] == '+' || base[size] == '-')
			return (-1);
		c = base[size];
		index = 0;
		while (base[index] != '\0')
		{
			if (base[index] == c && index != size)
				return (-1);
			index++;
		}
		size++;
	}
	if (size <= 1)
		return (-1);
	return (size);
}

int	edgecase(int *nbr, char *base, int size, int base_num)
{
	int	count;

	count = 0;
	if (*nbr == -2147483648)
	{
		write(1, "-", 1);
		write(1, &base[base_num - 1], 1);
		while (count++ < size - 1)
			write(1, &base[0], 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	buffer[33];
	int		size;
	int		is_edge_case;
	int		base_num;

	is_edge_case = 0;
	base_num = find_radix(base);
	if (nbr < 0)
	{
		nbr = (-1) * (nbr);
		is_edge_case = -1;
	}
	if (base_num == -1)
		return ;
	size = conv_rev_number(nbr, buffer, base, base_num);
	if (edgecase(&nbr, base, size, base_num) == 1)
		return ;
	if (is_edge_case == -1)
		write(1, "-", 1);
	if (is_edge_case != 1)
		write(1, buffer, size);
}

// #include<stdio.h>
// #include <limits.h>
// void	test_putnbr_base(int nb, char *base, char *want)
// {
// 	printf("putnbr_base(nb=%d, base=\"%s\"):\n", nb, base);
// 	ft_putnbr_base(nb, base);
// 	printf("\n%s\n", want);
// }
// int	main()
// {
// 		char *hex = "123456789ABCDEFG";
// 	char *octal = "poneyvif";
// 	char *dec = "0123456789";

// 	test_putnbr_base(0, "", "");
// 	test_putnbr_base(0, "1", "");
// 	test_putnbr_base(0, "11", "");
// 	test_putnbr_base(0, hex, "1");
// 	test_putnbr_base(1, hex, "2");
// 	test_putnbr_base(-1, hex, "-2");
// 	test_putnbr_base(2, hex, "3");
// 	test_putnbr_base(15, hex, "G");
// 	test_putnbr_base(31, hex, "2G");
// 	test_putnbr_base(42, hex, "3B");
// 	test_putnbr_base(500, hex, "2G5");
// 	test_putnbr_base(-1, hex, "-2");
// 	test_putnbr_base(-42, hex, "-3B");
// 	test_putnbr_base(64, octal, "opp");
// 	test_putnbr_base(65, octal, "opo");
// 	test_putnbr_base(INT_MIN, "01", "-10000000000000000000000000000000");
// 	test_putnbr_base(66, octal, "opn");
// 	test_putnbr_base(1, dec, "1");
// 	test_putnbr_base(-1, dec, "-1");
// 	test_putnbr_base(-12, "01", "-1100");
// }