/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:41:02 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/29 11:21:13 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	int	nx;

	i = 0;
	n = 1;
	nx = argc - 1;
	while (nx >= n)
	{
		while (argv[nx][i] != '\0')
		{
			write(1, &argv[nx][i], 1);
			i++;
		}
		write(1, "\n", 1);
		nx--;
		i = 0;
	}
	return (0);
}
/* nx=argc -1 because as usual after all the arguments we have '\0'
 * which we of course do not want to include in our code and so argc-1
 * marks the last explicit argument we have in our command line*/
