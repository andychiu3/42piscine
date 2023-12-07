/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:36:34 by achiu             #+#    #+#             */
/*   Updated: 2023/12/07 11:01:10 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i--)
		write(1, &str[i], 1);
	write(1, "\n", 1);
	return (str);
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_rev_print(av[1]);
	return (0);
}
