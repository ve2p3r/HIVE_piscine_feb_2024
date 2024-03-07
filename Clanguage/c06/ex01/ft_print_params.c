/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:40 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/29 09:15:28 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (argc > n)
	{
		while (argv[n][i] != '\0')
		{
			write(1, &argv[n][i], 1);
			i++;
		}
		write(1, "\n", 1);
		n++;
		i = 0;
	}
	return (0);
}
/*REMEMBER TO RESET YOUR FUCKING INDEX WHEN STARTING TO OUTPUT 
 * A NEW ARGUMENT NAME*/
