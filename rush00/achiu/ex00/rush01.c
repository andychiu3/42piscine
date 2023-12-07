/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_Andy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:08:26 by achiu             #+#    #+#             */
/*   Updated: 2023/11/19 09:09:07 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, int first, int mid, int last)
{
	int	i;

	i = 1;
	if (x > 0)
	{
		ft_putchar(first);
	}
	while (i < (x - 1))
	{
		ft_putchar(mid);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(last);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x > 0 && y > 0)
	{
		print_line(x, '/', '*', '\\');
	}
	while (i < y - 1 && x > 0)
	{
		print_line(x, '*', ' ', '*');
		i++;
	}
	if (y > 1 && x > 0)
	{
		print_line(x, '\\', '*', '/');
	}
}
