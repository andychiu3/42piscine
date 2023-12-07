/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:00:06 by achiu             #+#    #+#             */
/*   Updated: 2023/11/23 16:00:10 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < size - 1)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < size)
	{
		dest[i] = '\0';
		j++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	src[] = "Hello";
// 	char	dest[10] = "";
// 	int	r;

// 	r = strlcpy(dest, src, 2);
// 	printf("%d", r);
// 	return (0);
// }

/*int	main(void)
{
	char	src[] = "Hello";
	char	dest[10] = "";
	int	r;

	r = ft_strlcpy(dest, src, 2);
	printf("%d", r);
	return (0);
}*/
