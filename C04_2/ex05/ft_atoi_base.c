/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:29:54 by achiu             #+#    #+#             */
/*   Updated: 2023/11/28 14:30:01 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	no_double(char *s, char c, pos)
{
	int	i;

	i = 0;
	
}
int	check_base(char *base)
{
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-' || *base == *(base + 1))
			return (0);
		base++;
	}
	if (base <= 1)
		return (0);
	return (1);
}

// int ft_atoi_base(char *str, char *base)
// {
// 	if (check_base == 1)
// 	{
// 		int	i = 0;
// 		int	s;

// 		while (*str <= 32)
// 			str++;
// 		while (*str = '+' || *str = '-')
// 		{
// 			if (*str = '-')
// 				s *= -1;
// 			str++;
// 		}
// 	}
// }
