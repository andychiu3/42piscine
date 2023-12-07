/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:33:50 by achiu             #+#    #+#             */
/*   Updated: 2023/12/02 11:35:35 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*int	main(void)
{
	int	i = 0;
	int	*r = ft_range(4, 10);
	int len = 6;

	while (i < len)
	{
		printf("%d", r[i]);
		i++;
	}
	return (0);
}*/
