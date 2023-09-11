/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:49:35 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/21 11:18:24 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>

void	ft_putstr(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
		size++;
	write(1, str, size);
}

// int main(void)
// {
//  	ft_putstr("Hello");
// }