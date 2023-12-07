/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:02:37 by achiu             #+#    #+#             */
/*   Updated: 2023/11/23 17:50:25 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[] = "42stu";
	char	s2[] = "42stu";
	int	r;

	r = strcmp(s1, s2);
	printf("%d\n", r);
	return (0);
}*/

// int	main(void)
// {
// 	char	s1[] = "42stud";
// 	char	s2[] = "42studen";
// 	int	r;

// 	r = strcmp(s1, s2);
// 	printf("%d\n", r);
// 	return (0);
// }
