/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:29:04 by vsimioni          #+#    #+#             */
/*   Updated: 2024/03/04 10:57:30 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		j;

	new = ((char *)malloc(sizeof(char) * ft_strlen(src) + 1));
	i = 0;
	j = 0;
	if (!(new))
		return (0);
	while (src[j] != '\0')
	{
		new[i++] = src[j++];
	}
	new[i] = '\0';
	return (new);
}
/* in order to use malloc we need to know how long our string is
 * so we use strlen.
 * STRLEN: DOES NOT COUNT '\0'!!!!
 * (s[i] != '\0') is the same as saying (*s++);
 * *s++; means that we derefence our pointer declared 
 * as a function parameter char *s so that we get 
 * the value found at the memory location it points to 
 * (i.e. the current character in the string), and we increment
 * to go to the next character as long as it is not the nul terminator.
 * we then create the new string with malloc, checking if sufficient mem
 * has been allocated.

ft_strlen(src) + 1 because strlen does not count the null terminator

#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *myft;
	char *og;

	if (argc == 2)
	{
		myft = ft_strdup(argv[1]);
		og = strdup(argv[1]);
		printf("%s:\n%s:", myft, og);
	}
	return (0);
}*/
