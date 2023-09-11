/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:42:19 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/21 10:51:58 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	if (*b != 0)
	{
		*a = *a / *b;
		*b = temp % *b;
	}
	else
	{
		*a = -1;
		*b = -1;
	}
}

// int main(void)
// {
// 	int div=0;
// 	int mod=5;

// 	ft_ultimate_div_mod(&div,&mod);
// 	printf("%d %d",div,mod);
// }