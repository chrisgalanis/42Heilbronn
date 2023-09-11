/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:08:06 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/23 16:37:34 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	size_dest;
	int	size_src;

	size_dest = 0;
	size_src = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	while (src[size_src] != '\0')
	{
		dest[size_dest] = src[size_src];
		size_src++;
		size_dest++;
		dest[size_dest] = '\0';
	}
	return (dest);
}

// # include<stdio.h>	
// # include<string.h>
// void	test_strcat(char *dest_readonly, char *src)
// {
// 	char	*dest_pointer;
// 	char	dest[500];
// 	char	dest_orig[500];
// 	printf("strcat: dest=\"%s\" src=\"%s\"\n", dest_readonly, src);
// 	// Fill up with ns to see errors.
// 	strcpy(dest, "nnnnnnnnnnnnnnnn");
// 	strcpy(dest_orig, "nnnnnnnnnnnnnnnn");
// 	// Copy dest for call to original strcat.
// 	strcpy(dest, dest_readonly);
// 	strcpy(dest_orig, dest_readonly);
// 	dest_pointer = ft_strcat(dest, src); // Call our ft_strcat
// 	strcat(dest_orig, src); // Call original strcat
// 	printf("  pointer-equal=%d    strcat=nft_strcat: \"%s\"=\"%s\"\n",
// dest == dest_pointer, dest_orig, dest);
// }
// int main()
// {
// 	test_strcat("a", "b");
// 	test_strcat("a", "b ");
// 	test_strcat("b ", "a");
// 	test_strcat("", "a");
// 	test_strcat("a", "");
// 	test_strcat("xxx", "yyy");
// return (0);
// }