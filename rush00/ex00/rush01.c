/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:06:00 by achiu             #+#    #+#             */
/*   Updated: 2023/11/18 10:58:40 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_base(int y, char *top, char *middle, char *bottom)
{
	space	1;

	if	(y < 2)
	{
		put_char(*top);
	}
	else (space < y - 1)
	{
		put_char(*middle);
		space++;
	}
	else (y > 1)
	{
		put_char(*bottom);
	}
	put_char('/n')
}

void	content(int y, int x)
{
	space	1;

	if (y < 2)
	{
		print_base(y, '/', '*', '\\');
	}
	else if (space < x - 1)
	{
		print_base(y, '*', ' ', '*');
		space++;
	}
	else if (y > 1)
	{
		print_base(y, '\\', '*', '/')
	}
}	:x
