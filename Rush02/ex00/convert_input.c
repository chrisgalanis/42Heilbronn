/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuhlber <jmuhlber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:12:12 by jmuhlber          #+#    #+#             */
/*   Updated: 2023/09/02 16:28:13 by jmuhlber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_digit(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

unsigned int	convert_input(char *str)
{
	unsigned int	res;
	int				cnt;

	res = 0;
	cnt = 0;
	while (str[cnt] == ' ')
		cnt++;
	while (check_digit(str[cnt]) == 1)
	{
		res = res * 10;
		res = res + (str[cnt] - '0');
		cnt++;
	}
	return (res);
}
