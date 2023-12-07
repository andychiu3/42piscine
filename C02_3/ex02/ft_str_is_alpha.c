/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:43:32 by achiu             #+#    #+#             */
/*   Updated: 2023/11/21 14:01:45 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNPQRSTUVWXYZ";
	int	result = ft_str_is_alpha(alpha);

	printf("%d", result);
	return (0);
}*/