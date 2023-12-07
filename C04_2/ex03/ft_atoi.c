/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:06:24 by achiu             #+#    #+#             */
/*   Updated: 2023/11/28 10:07:19 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	r;
	int	s;

	r = 0;
	s = 1;
	while (*str <= 32)
		str++;
	while (*str == '-' || *str == '+') // actual atoi is only counting one symbol
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + (*str - '0');
		str++;
	}
	return (r * s);
}

int	main(void)
{
	printf("%d\n", ft_atoi("\t\v\n\f -+1234ab567"));
	return (0);
}
