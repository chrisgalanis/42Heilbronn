/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:15:41 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/27 11:06:01 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	index;

	index = 0;
	size_dest = 0;
	size_src = 0;
	while (dest[size_dest] != '\0' && size_dest < size)
		size_dest++;
	while (src[size_src] != '\0')
		size_src++;
	while (src[index] != '\0' && size_dest + index + 1 < size)
	{
				dest[size_dest + index] = src[index];
				index++;
	}
	if (size_dest < size)
		dest[size_dest + index] = '\0';
	return (size_dest + size_src);
}

// #include<stdio.h>
// #include<string.h>
// void	test_strlcat(char *dest_readonly, char *src, unsigned int size)
// {
// 	char dest[500];
// 	char dest_orig[500];
// 	unsigned int count_got;
// 	unsigned int count_want;
// 	strcpy(dest, "nnnnnnnnnnnnnnnnnnnnnnnnn");
// 	strcpy(dest_orig, "nnnnnnnnnnnnnnnnnnnnnnnnn");
// 	strcpy(dest, dest_readonly);
// 	strcpy(dest_orig, dest_readonly);
// 	count_got = ft_strlcat(dest, src, size);
// 	count_want = strlcat(dest_orig, src, size);
// 	printf("ft_strlcat(dest=\"%s\" src=\"%s\" size=\"%d\") => 
//strlcat=ft_strlcat\"%s\"=\"%
//s\", %d=%d\n", dest_readonly, src, size, dest_orig, dest,
// count_want, count_got);
// }
// int	main(void)
// {
// 	char arr1[6] = "AAAAA";
// 	char src[5] = "AAmm";
// 	// unsigned int a = ft_strlcat(arr1,src,5);
// 	printf("%s %d",arr1,ft_strlcat(arr1,src,9));
// 	test_strlcat(arr1, src, 0);
// 	return (0);
// }