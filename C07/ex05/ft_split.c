/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:41:24 by cgalanis          #+#    #+#             */
/*   Updated: 2023/09/07 10:38:54 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	string_size(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int	separator(char *sep, char current_char)
{
	int	index;

	index = 0;
	while (sep[index] != '\0')
	{
		if (sep[index] == current_char)
			return (1);
		index++;
	}
	return (0);
}

int	array_size(char *str, char *charset)
{
	int	size;
	int	index;
	int	is_sep;

	is_sep = 0;
	size = 2;
	index = 0;
	while (separator(charset, str[index]) == 1)
		index++;
	while (str[index] != '\0')
	{
		if (separator(charset, str[index]) == 1 && is_sep == 0)
		{
			size++;
			is_sep = 1;
		}
		else if (separator(charset, str[index]) == 0)
			is_sep = 0;
		index++;
	}
	return (size);
}

char	*splitting(char *str, char *charset, int *arr_index, int *index)
{
	char	*array;
	int		sep_index;
	int		j;

	sep_index = *arr_index;
	while (str[sep_index] != '\0' && separator(charset, str[sep_index]) == 0)
		sep_index++;
	array = (char *)malloc((sep_index - (*arr_index) + 1) * sizeof(char));
	j = 0;
	while (j < sep_index - (*arr_index))
	{
		array[j] = str[(*arr_index) + j];
		j++;
	}
	array[j] = '\0';
	if (sep_index - (*arr_index) > 0)
		(*index)++;
	(*arr_index) += (sep_index - (*arr_index));
	while (str[*arr_index] != '\0' && separator(charset, str[*arr_index]) == 1)
		(*arr_index)++;
	return (array);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		alloc_size;
	int		index;
	int		arr_index;

	alloc_size = array_size(str, charset);
	array = (char **)malloc((alloc_size + 1) * sizeof(char *));
	if (str == NULL || charset == NULL)
	{
		array[0] = 0;
		return (array);
	}	
	arr_index = 0;
	index = 0;
	while (str[arr_index] != '\0')
	{
		array[index - 1] = splitting(str, charset, &arr_index, &index);
	}
	while (index < alloc_size)
		array[index++] = 0;
	return (array);
}

// void	print_strings(char **strings)
// {
// 	while (*strings != NULL)
// 	{
// 		printf("\"%s\"\n", *strings);
// 		strings++;
// 	}
// }
// void	test_split(char *str, char *charset, char *want[10])
// {
// 	char	**out;
// 	char	**out_readable;
// 	out_readable = NULL;
// 	out = ft_split(str, charset);
// 	if (out != NULL)
// 		out_readable = out;
// 	printf("split(str=\"%s\" charset=\"%s\"): want_mem
// ~returned_mem: ptr=%p\n", str, charset,out);
// 	printf(" got=\n");
// 	print_strings(out);
// 	printf("want=\n");
// 	print_strings(want);
// 	if (out != NULL)
// 		free(out);
// }
// int main()
// {
// 	test_split("What(^_^)the(^_^)fʌkc(^_^)!!!(^_^)", "(
	// ^_^)", (char*[10]) {"What",  "the", "fʌkc", "!!!", 0});
// 	test_split("Hello,world.!", ".,", (char *[10]) {"Hello","world", "!", 0});
// 	test_split("Hello..!", ".,", (char *[10]) {"Hello", "!", 0});
// 	test_split("", "", (char *[10]) {0});
// 	test_split("hello", "", (char *[10]) {"hello", 0});
// 	test_split("", "", (char *[10]) {0});
// 	test_split(",,hello,world,,", ",", (char *[10]) {"hello", "world", 0});
// 	test_split("hello,,,,world", ",", (char *[10]) {"hello", "world", 0});
// 	test_split("aaabbbaaaccc", "ab", (char *[10]) {"ccc", 0}); 
// 	return (0);	
// }