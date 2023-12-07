/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:00:56 by achiu             #+#    #+#             */
/*   Updated: 2023/12/07 10:06:59 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
