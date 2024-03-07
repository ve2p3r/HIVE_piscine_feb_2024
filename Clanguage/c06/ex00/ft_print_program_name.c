/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:21:33 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/28 16:55:42 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc >= 1)
	{
		while (argv[0][i] != '\0')
		{
			write(1, &argv[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/*make sure that the argument count is at least 1 because
 * we definitely want to print the file name which is the
 * first argument.
 * we use **argv because it is a pointer to a pointer.
 * it needs two brackets because argv[0] is the file name
 * and [i] is the filenames character position*/
