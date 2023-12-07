/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:48:19 by achiu             #+#    #+#             */
/*   Updated: 2023/11/20 13:56:16 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = i / *b;
	*b = i % *b;
}

/*
#include <stdio.h>
int	main(void)
{
	int	x = 20;
	int	y = 6;

	int *a = &x;
	int *b = &y;

	ft_ultimate_div_mod(a, b);
	printf("%d, %d", *a, *b);
	return (0);
}
*/