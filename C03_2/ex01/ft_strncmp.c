/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:19:37 by achiu             #+#    #+#             */
/*   Updated: 2023/11/28 17:24:21 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*int	main()
{
	char *s1 = "12";
	char *s2 = "10";
	printf("%d\n", strncmp(s1, s2, 2));

	int	r;
	r = ft_strncmp(s1, s2, 2);
	printf("%d\n", r);
	return (0);
}*/
