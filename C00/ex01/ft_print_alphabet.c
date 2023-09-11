/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:44:17 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/16 14:44:41 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	current_letter;

	current_letter = 'a';
	while (current_letter <= 'z')
	{
		write(1, &current_letter, 1);
		current_letter++;
	}
}

// int main(){
//     ft_print_alphabet();

//     return 0;
// }