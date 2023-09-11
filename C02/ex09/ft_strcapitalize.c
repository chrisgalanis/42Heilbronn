/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:37:13 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/23 11:03:09 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lowercase(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

int	uppercase(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}

int	is_digit(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		is_first;
	char	*start;	

	start = str;
	is_first = 1;
	while (*str != '\0')
	{
		if (is_first == 1 && lowercase(*str) == 1)
		{
			is_first = 0;
			*str -= 32;
		}
		else if (is_first == 0 && uppercase(*str) == 1)
			*str += 32;
		else if (lowercase(*str) == 0)
			is_first = 1;
		if (is_digit(*str) == 1 || uppercase(*str) == 1)
			is_first = 0;
		str++;
	}
	return (start);
}

// #include<stdio.h>
// int main()
// {
// 	char arr[100] = "salut, COMmen eux; cinquante+et+un";
// 	printf("%s", ft_strcapitalize(arr));
// 	return (0);
// }