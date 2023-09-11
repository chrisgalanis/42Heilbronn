/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:17:58 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/21 11:12:59 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		count;
	int		temp;

	temp = 0;
	count = 0;
	while (count < size)
	{
		temp = tab[size - 1];
		tab[size - 1] = tab[count];
		tab[count] = temp;
		count++;
		size--;
	}
}

// int main()
// {
//   int size = 6;
//   int arr[size];
// for(int i=0; i<size; i++)
// 	arr[i] = i;
//   ft_rev_int_tab(arr,size);
//   for(int i=0; i<size; i++)
// 	printf("%d", arr[i]);
// }