/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:25:12 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/29 13:04:11 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	print_function(int argc, char **argv)
{

}

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	int	nx;
	int	temp;

	i = 0;
	n = 1;
	nx = argc - 1;
}
