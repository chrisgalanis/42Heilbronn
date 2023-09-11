/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgalanis <cgalanis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:43:13 by jmuhlber          #+#    #+#             */
/*   Updated: 2023/09/03 21:33:55 by cgalanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <math.h>



void	output_error(int err_type)
{
	if (err_type == 1)
		write(2, "Dict Error\n", 11);
	else if (err_type == -1)
		write(2, "Error\n", 6);
	return ;
}
