/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:59:23 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/20 09:33:25 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_print_comb(char first_digits[2], char second_digits[2], int*counter)
{
	int	are_same0;
	int	are_same1;

	second_digits[0] = '0';
	while (second_digits[0] <= '9')
	{
		second_digits[1] = first_digits[1] + 1;
		while (second_digits[1] <= '9')
		{	
			(*counter)++;
			write(1, first_digits, 2);
			write(1, " ", 1);
			write(1, second_digits, 2);
			if ((*counter) != 4500)
				write(1, ", ", 2);
			second_digits[1]++;
		}
		second_digits[0]++;
	}
	first_digits[1]++;
}

void	ft_print_comb2(void)
{
	char	first_digits[2];
	char	second_digits[2];
	int		count_second_digits ;

	count_second_digits = 0;
	first_digits[0] = '0';
	while (first_digits[0] <= '9')
	{
		first_digits[1] = '0';
		while (first_digits[1] <= '8')
		{
			ft_print_comb (first_digits, second_digits, &count_second_digits);
		}
		first_digits[0]++;
	}
}

// int main()
// {
// 	ft_print_comb2();
// 	return 0;
// }