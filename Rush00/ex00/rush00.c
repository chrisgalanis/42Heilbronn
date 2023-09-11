/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:16:43 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/20 23:44:17 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character);

void	first_n_last(int index_c, int columns)
{
	if (index_c == 0 || index_c == columns - 1)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	between(int index_c, int columns)
{
	if (index_c == 0 || index_c == columns - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int columns, int rows)
{
	int		index_c;
	int		index_r;

	index_r = 0;
	while (index_r < rows)
	{
		index_c = 0;
		while (index_c < columns)
		{
			if (index_r == 0 || index_r == rows - 1)
				first_n_last(index_c, columns);
			else
				between(index_c, columns);
			index_c++;
		}
		ft_putchar('\n');
		index_r++;
	}
}
