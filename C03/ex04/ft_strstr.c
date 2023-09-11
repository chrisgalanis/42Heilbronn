/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:14:34 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/27 11:17:02 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_strncmp( char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && (s1[counter] != '\0' || s2[counter] != '\0'))
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		size_find;

	size_find = 0;
	if (*to_find == '\0')
		return (str);
	while (to_find[size_find] != '\0')
		size_find++;
	while (*str != '\0')
	{
		if (my_strncmp(str, to_find, size_find) == 0)
		{
			return (str);
		}
		str++;
	}
	return (0);
}

// #include <string.h>
// #include <unistd.h>
// void	test_strstr(char *str, char *to_find)
// {
// 	char	*found;
// 	char	*found_orig;
// 	found = ft_strstr(str, to_find);
// 	found_orig = strstr(str, to_find);
// 	printf("strstr: str=\"%s\" to_find=\"%s\" strstr=ft_strstr =>
// %p=%p equal? 1=%d\n", str, to_find, found_orig, found, found_orig == found);
// }
// int	main(void)
// {
// 	// test_strstr("", "");
// 	// test_strstr("abc", "");
// 	// test_strstr("", "abc");
// 	// test_strstr("abc", "");
// 	test_strstr("abc", "a");
// 	test_strstr("abc", "b");
// 	test_strstr("abc", "c");
// 	test_strstr("abc", "ab");
// 	test_strstr("abc", "ac");
// 	test_strstr("abc", "bc");
// 	test_strstr("abc", "bcc");
// 	test_strstr("xxxxabcyyyy", "bc");
// 	return (0);
// }