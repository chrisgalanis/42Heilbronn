/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:30:56 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/20 09:54:48 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	char	word[3];

	word[0] = '0';
	while (word[0] <= '7')
	{
		word[1] = word[0] + 1;
		while (word[1] <= '8')
		{
			word[2] = word[1] + 1;
			while (word[2] <= '9')
			{
				write(1, word, 3);
				if (word[0] != '7')
					write(1, ", ", 2);
				word[2]++;
			}
			word[1]++;
		}
		word[0]++;
	}
}
