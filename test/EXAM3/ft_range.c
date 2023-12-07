/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:57:38 by achiu             #+#    #+#             */
/*   Updated: 2023/12/07 14:13:41 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int	i;
	int	*temp;

	i = 0;
	if (start >= end)
		return (0);
	temp = malloc(sizeof(temp) * (end - start + 1));
	if (!temp)
		return (0);
	while (start <= end)
	{
		temp[i] = start;
		start++;
		i++;
	}
	return (temp);
}

int	main(void)
{
	int	start = 5;
	int end = 10;
	int	*r = ft_range(start, end);

	while (start++ < end)
		printf("%d\n", *r++);
	return (0);
}
