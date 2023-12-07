/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:48:54 by achiu             #+#    #+#             */
/*   Updated: 2023/11/28 12:00:20 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	no_double(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (pos--)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
			|| no_double(base, base[i], i) == 0)
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	if (check_base(base) == 1)
	{
		while (base[size] != '\0')
			size++;
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			nbr = 147483648;
		}
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= size)
			ft_putnbr_base(nbr / size, base);
		ft_putchar(base[nbr % size]);
	}
}

/*int	main(void)
{
	ft_putnbr_base(2147483647, "0123456789");
	return (0);
}*/