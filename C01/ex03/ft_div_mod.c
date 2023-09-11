/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:45:49 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/21 10:50:51 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = -1;
		*mod = -1;
	}
}

// int main(void)
// {
// 	int div;
// 	int mod;

// 	ft_div_mod(9,0,&div,&mod);
// 	printf("%d %d",div,mod);
// }
