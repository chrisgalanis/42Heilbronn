/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:57:02 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/27 08:59:02 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				size_dest;
	unsigned int	size_src;

	size_dest = 0;
	size_src = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	while (src[size_src] != '\0' && size_src < nb)
	{
		dest[size_dest] = src[size_src];
		size_src++;
		size_dest++;
		dest[size_dest] = '\0';
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// void	test_strncat(char *dest_readonly, char *src, unsigned int nb)
// {
// 	char	*dest_pointer;
// 	char	dest[500];
// 	char	dest_orig[500];
// 	// Fill up with ns to see errors.
// 	strcpy(dest, "nnnnnnnnnnnnnnnn");
// 	strcpy(dest_orig, "nnnnnnnnnnnnnnnn");
// 	// Copy dest for call to original strcat.
// 	strcpy(dest, dest_readonly);
// 	strcpy(dest_orig, dest_readonly);
// 	dest_pointer = ft_strncat(dest, src, nb); // Call our ft_strcat
// 	char *strO = strncat(dest_orig, src, nb); // Call original strcat
// 	printf("strncat: dest=\"%s\" src=\"%s\" nb=%d pointer-equal=%d strncat=nft
//_strncat:\"%s\"=\"%s\"\n", dest_readonly, src, nb, 
// strcmp(strO,dest_pointer), strO, dest);
// }
// int main()
// {
// 	int i =0;
// 	while (i < 3)
// 	{
// 		test_strncat("a", "b", i);
// 		test_strncat("a", "b ", i);
// 		test_strncat("b ", "a", i);
// 		test_strncat("", "a", i);
// 		test_strncat("a", "", i);
// 		test_strncat("xxx", "yyy", i);
// 		i += 1;
// 	}
// return (0);
// }