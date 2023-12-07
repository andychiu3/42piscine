/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:14:37 by achiu             #+#    #+#             */
/*   Updated: 2023/11/29 11:49:50 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (r);
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 3));
	return (0);
}*/
