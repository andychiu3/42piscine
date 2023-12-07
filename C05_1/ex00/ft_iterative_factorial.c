/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:43:25 by achiu             #+#    #+#             */
/*   Updated: 2023/11/28 18:45:02 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	return (r);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
}*/