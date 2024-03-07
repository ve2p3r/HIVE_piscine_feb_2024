/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:50:35 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/21 14:44:09 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	char	x;
	char	y;

	x = *s1;
	y = *s2;
	while (*s1 == *s2)
	{
		if ((*s1 == '\0') && (*s2 == '\0'))
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>
 * #include <string.h>

int	main()
{
  char source1[] = "cute";
  char source2[] = "cut me";
  printf("%s\t%s\n", source1, source2);
  printf("%d", ft_strcmp(source1, source2));
  return (0);
}*/
