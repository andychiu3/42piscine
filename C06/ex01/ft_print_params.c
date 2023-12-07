/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:12:40 by achiu             #+#    #+#             */
/*   Updated: 2023/11/29 18:14:42 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (argc > 1)
	{
		while (argv[j][i] != 0)
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		j++;
		ft_putchar('\n');
		i = 0;
		argc--;
	}
	return (0);
}
