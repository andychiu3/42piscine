/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:14:33 by achiu             #+#    #+#             */
/*   Updated: 2023/12/07 12:22:00 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	int	i;
	int	l;
	char temp;

	i = 0;
	l = 0;
	while (str[l])
		l++;
	while (i < l /2)
	{
		temp  = str[i];
   		str[i] = str[l - 1];
		str[l - 1] = temp;
		i++;
		l--;
	}
	return (str);
}

int	main(void)
{
	char str[26] = "abcdefghijklnopqrstuvwxyz";

	printf("%s", ft_strrev(str));
	return (0);
}	
