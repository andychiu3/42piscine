/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:45:18 by achiu             #+#    #+#             */
/*   Updated: 2023/11/20 13:47:28 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int	main(void)
{
	int	a = 50;
	int	b = 11;

	int	div;
	int	mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);
	return (0);
}*/
