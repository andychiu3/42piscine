/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:41:42 by achiu             #+#    #+#             */
/*   Updated: 2023/12/07 12:50:26 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	no_double(char *s, char c, int pos) // dd, d, 1
{
	while (pos--)
	{
		if (s[pos] == c)
			return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					if (no_double(av[1], av[1][i], i) == 1)
						write(1, &av[1][i], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
