/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:09:56 by achiu             #+#    #+#             */
/*   Updated: 2023/11/28 16:52:13 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (str + i - j);
		}
		i++;
		j = 0;
	}
	return (0);
}

/*int	main(void)
{
	char str[] = "ti tesxting string";
	char find[] = "ixg";

	char *r = strstr(str, find);
	if (r != NULL )
		printf("%s\n", r);
	else
		printf("nothing there\n");
	char *m = ft_strstr(str, find);
	if (m != NULL )
		printf("%s\n", m);
	else
		printf("nothing there");
	return (0);
}*/
