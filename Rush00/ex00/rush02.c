/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehykaj <ehykaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:16:43 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/20 15:06:11 by ehykaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character);

void	first(int index_c, int columns)
{
	if (index_c == 0 || index_c == columns - 1)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	last(int index_c, int columns)
{
	if (index_c == 0 || index_c == columns - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	between(int index_c, int columns)
{
	if (index_c == 0 || index_c == columns - 1)
		ft_putchar('B');
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
			if (index_r == 0)
				first(index_c, columns);
			else if (index_r == rows - 1)
				last(index_c, columns);
			else
				between(index_c, columns);
			index_c++;
		}
		ft_putchar('\n');
		index_r++;
	}
}
