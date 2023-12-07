/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:15:25 by achiu             #+#    #+#             */
/*   Updated: 2023/12/07 11:34:01 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != 0)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}

int	main(void)
{
	char *src = "Hi";
	char dest[100] = "hello world";

	printf("strcpy = %s\n", strcpy(dest, src));
	printf("ft_strcpy = %s\n", ft_strcpy(dest, src));
	return (0);
}

