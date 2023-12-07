/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:00:31 by achiu             #+#    #+#             */
/*   Updated: 2023/12/05 16:00:33 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	int		len;
	char	*tab;
	char	*temp_tab;

	len = ft_len(s);
	tab = malloc(sizeof(char) * (len + 1));
	temp_tab = tab;
	if (!tab)
		return (0);
	while (*s)
		*tab++ = *s++;
	*tab = '\0';
	return (temp_tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*dest;
	int			i;

	dest = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		dest[i].size = ft_len(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		i++;
	}
	dest[i].size = '\0';
	dest[i].str = NULL;
	dest[i].copy = NULL;
	return (dest);
}

// int	main(void)
// {
// 	printf("%d\n", ft_len("hello world"));
// 	printf("%s\n", ft_strdup("hihi"));
// 	return (0);
// }