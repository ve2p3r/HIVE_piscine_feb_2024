/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:26:45 by vsimioni          #+#    #+#             */
/*   Updated: 2024/03/05 11:38:07 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	length(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*mystrdup(char *str)
{
	char	*new;
	int		i;
	int		j;

	new = ((char *)malloc(sizeof(char) * length(str) + 1));
	i = 0;
	j = 0;
	if(!(new))
			return (0);
	while (str[i] != '\0')
	{
		new[j] = str[i];
		i++;
		j++;
	}
	new[j] ='\0';
	return (new);
}

#include <stdio.h>

int	main()
{
	char	string[10] = "hellooooo";
	
	printf("%s:\n", mystrdup(string));
	return (0);
}
