/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:57:59 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/24 10:09:48 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}	
	return (dest);
}

// #include<stdio.h>
// int main()
// {
// 	char arr1[3] = "nn";
// 	char arr2[4] = "BBB";
// 	printf("%s",ft_strncpy(arr1,arr2, 0));
// 	return 0;
// }	