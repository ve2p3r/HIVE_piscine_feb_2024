/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:23:13 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/21 15:20:17 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (*s1 == *s2))
	{
		if ((*s1 == '\0') && (*s2 == '\0'))
		{
			return (0);
		}
		s1++;
		s2++;
		i++;
	}
	while (i == n)
	{
		return (0);
	}
	return (*s1 - *s2);
}
/* i++ is made explicit because we have the extra n condition

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	source1[] = "cute";
	char	source2[] = "cut me";

	printf("%s\t%s\n", source1, source2);
	ft_strncmp(source1, source2, 3);
	printf("%d", ft_strncmp(source1, source2, 3));
	return (0);
}*/
