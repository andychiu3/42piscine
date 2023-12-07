/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:33:53 by achiu             #+#    #+#             */
/*   Updated: 2023/12/05 16:34:10 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_str(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void	ft_putnbr(int size)
{
	if (size < 0)
	{
		write(1, "-", 1);
		size = -size;
	}
	if (size >= 10)
		ft_putnbr(size / 10);
	size = size % 10 + '0';
	write(1, &size, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_str(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/*int	main(int ac, char **av)
{
	t_stock_str	*r = ft_strs_to_tab(ac, av);
	ft_show_tab(r);

	free(r);
	return (0);
}*/
