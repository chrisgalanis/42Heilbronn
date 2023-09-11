/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 23:20:12 by cgalanis          #+#    #+#             */
/*   Updated: 2023/08/27 10:59:49 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp( char *s1, char *s2, unsigned int n)
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

// #include<stdio.h>
// #include<string.h>

// void	test_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	// Run our ft_strcmp and strcmp from the standard library and compare.
// 	printf("strncmp s1=\"%s\" s2=\"%s\" n=%d: %d~%d\n", s1, s2, n,
// 		ft_strncmp(s1, s2, n),
// 		strncmp(s1, s2, n));
// }
// int main()
// {
// 	char	test_string[500];
//  int i = 3;

// 		test_strncmp("AAa", "a \0x", i);
// 		sprintf(test_string, "a%c", 130);
// 		test_strncmp("a", test_string, i);
// 		test_strncmp(test_string, "a", i);
// 		i += 1;
// 	return (0);
// }