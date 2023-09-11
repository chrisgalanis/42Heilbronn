/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:25:32 by cgalanis          #+#    #+#             */
/*   Updated: 2023/09/03 15:27:38 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int valid_input(char **argv, int index)
{
	unsigned int	num_index;;
	int isvalid;

	isvalid = 0;
	num_index = 0;
	int number;
	while (argv[index][num_index] != '\0')
	{
		if (argv[index][num_index] <= '9' && argv[index][num_index] >= '0')
			num_index++;
		else
			isvalid = 1;
	}
	if (isvalid != 1)
		return (convert_input(argv[index]));
	
}


// int	main(int argc, char **argv)
// {
// 	int number;
// 	int error;
// 	int file;
// 	char *file_name;
	
// 	if (argc < 2 || argc > 3)
// 		return (0);
// 	if (argc == 2)
// 		number = valid_input(argv, 1);
// 	else
// 	{
// 		file_name = argv[1];
// 		number = valid_input(argv, 2);
// 	}		
	
// 	error = open_file(file,file_name);
	
// 	//Make a function that closes the file and 
// 	// frees the allocated memory
// 	close(file);
// }
