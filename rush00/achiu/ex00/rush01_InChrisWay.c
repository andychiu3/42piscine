/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_InChrisWay.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:06:37 by achiu             #+#    #+#             */
/*   Updated: 2023/11/19 09:07:15 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int a)
{
	int	i;

	i = 1;
	if (a > 0)
	{
		ft_putchar('/');
		while (i < a - 1)
		{
			ft_putchar('*');
			i++;
		}
		if (a > 1)
		{
			ft_putchar('\\');
		}
	}
	ft_putchar('\n');
}

void	mid_line(int a)
{
	int	i;

	i = 1;
	if (a > 0)
	{
		ft_putchar('*');
		while (i < a - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (a > 1)
		{
			ft_putchar('*');
		}
	}
	ft_putchar('\n');
}

void	last_line(int a)
{
	int	i;

	i = 1;
	if (a > 0)
	{
		ft_putchar('\\');
		while (i < a - 1)
		{
			ft_putchar('*');
			i++;
		}
		if (a > 1)
		{
			ft_putchar('/');
		}
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int	i;

	i = 1;
	if (a > 0 && b > 0)
	{
		first_line(a);
		if (b > 2)
		{
			while (i < b - 1)
			{
				mid_line(a);
				i++;
			}
		}
		if (b > 1)
		{
			last_line(a);
		}
	}
}

int	main(void)
{
	rush(1, 0);
	return (0);
}
