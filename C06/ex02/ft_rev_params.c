/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:48:05 by achiu             #+#    #+#             */
/*   Updated: 2023/11/30 09:59:45 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	if (ac > 1)
	{
		while (j > 0)
		{
			while (av[j][i])
			{
				write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			j--;
		}
	}
	return (0);
}
