/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:13:45 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/21 11:08:02 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		count;
	int		count_comp;

	count = 0;
	count_comp = 0;
	while (count < size)
	{
		count_comp = 1;
		while (count_comp < size)
		{
			if (tab[count_comp] < tab[count_comp - 1])
				ft_swap(&tab[count_comp], &tab[count_comp - 1]);
			count_comp++;
		}		
		count++;
	}
}

// int main()
// {
// 	int size = 5;
// 	int arr[5] = {5,4,3, 2, 1};

// 	ft_sort_int_tab(arr, size);

// 	int count = 0;
// 	while(count < size)
// 	{
// 		printf("%d ", arr[count]);
// 		count++;
// 	}
// 	return 0;
// }
