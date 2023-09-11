/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:58:04 by cgalanis          #+#    #+#             */
/*   Updated: 2023/09/05 19:29:23 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_radix(char *base)
{
	int		size;
	int		index;
	char	c;

	size = 0;
	while (base[size] != '\0')
	{
		if (base[size] == '+' || base[size] == '-'
			|| (base[size] >= 9 && base[size] <= 32))
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

int	power(int num, int power)
{
	int	index;
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	index = 0;
	result = 1;
	while (index < power)
	{
		result *= num;
		index++;
	}
	return (result);
}

int	char_is_valid(char c, char *base)
{
	while (*base != '\0')
	{
		if (*base == c)
			return (1);
		base++;
	}
	return (0);
}

int	difference(char *str, char *base, int str_size, int base_num)
{
	int	number;
	int	index;
	int	diff;

	number = 0;
	index = 0;
	while (index < str_size)
	{
		diff = 0;
		if (char_is_valid(str[index], base) == 0)
			return (0);
		while (str[index] != base[diff])
			diff++;
		if (base[diff] == str[index])
			number = number + diff * power(base_num, str_size - index - 1);
		else
			return (0);
		index++;
	}
	return (number);
}

long	ft_atoi_base(char *str, char *base, int *sign)
{
	int		base_num;
	int		str_size;
	int		diff;

	*sign = 1;
	while (*str >= 9 && *str <= 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	base_num = find_radix(base);
	str_size = 0;
	while (str[str_size] != '\0' && char_is_valid(str[str_size], base))
		str_size++;
	if (base_num == -1)
		return (-1);
	diff = difference(str, base, str_size, base_num);
	if (diff == -1)
		return (-1);
	return (diff);
}
