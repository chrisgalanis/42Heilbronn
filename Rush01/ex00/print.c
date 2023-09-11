/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:55:03 by jlohmull          #+#    #+#             */
/*   Updated: 2023/08/27 23:35:49 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include <unistd.h>

void	print(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	print_digit(int digit)
{
	char	c;

	c = digit + '0';
	write(1, &c, 1);
}
