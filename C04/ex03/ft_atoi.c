/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:03:34 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/29 16:41:38 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int		number;
	int		sign;

	sign = 1;
	while (*str >= 9 && *str <= 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	number = 0;
	while (is_numeric(*str) == 1)
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * sign);
}

// #include<stdio.h>
// void	test_atoi(char *str, int want)
// {
// 	printf("atoi(\"%s\"): want=ft_atoi: %d=%d\n", str, want, ft_atoi(str));
// }
// int main()
// {
// 	test_atoi("a 1", 0);
// 	test_atoi("a1", 0);
// 	test_atoi("", 0);
// 	test_atoi(" 1", 1);
// 	test_atoi("\t  1", 1);
// 	test_atoi("--++", 0);
// 	test_atoi("--++0", 0);
// 	test_atoi("--++1", 1);
// 	test_atoi("---++1", -1);
// 	test_atoi("-++1", -1);
// 	test_atoi("+-1", -1);
// 	test_atoi("999931", 999931);
// 	test_atoi("-999931", -999931);
// 	return 0;
// }