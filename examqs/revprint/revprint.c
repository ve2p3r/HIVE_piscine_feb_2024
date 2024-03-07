/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:59:03 by vsimioni          #+#    #+#             */
/*   Updated: 2024/03/04 14:05:38 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	length(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*revprint(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = length(str) - 1;
	while (len >= i)
	{
		write(1, &str[len], 1);
		len--;
	}
	return (str);
	write(1, "\n", 1);
}

int	main()
{
	revprint("hey bitchass mfcker");
	return (0);
}
