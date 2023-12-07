/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:58:13 by achiu             #+#    #+#             */
/*   Updated: 2023/12/03 09:48:26 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (!array)
		return (-1);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	*range = array;
	return (i);
}

/*int	main(void)
{
	int	min = 5;
	int	max = 10;
	int	*tab;
	int	size;

	size = ft_ultimate_range(&tab, min, max);
	printf("%d\n", size);
	while (size--)
		printf("%d", *tab++);
}*/