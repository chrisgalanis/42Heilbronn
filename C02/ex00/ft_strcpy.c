/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:48:05 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/26 11:38:08 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy( char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

// #include<stdio.h>
// int main()
// {
// 	char arr1[3];
// 	char arr2[4] = "BBB";
// 	printf("%s",ft_strcpy(arr1,arr2));
// 	return 0;
// }