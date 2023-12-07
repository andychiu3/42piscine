/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:38:22 by achiu             #+#    #+#             */
/*   Updated: 2023/12/03 10:46:27 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strs(int size, char **strs, char *sep)
{
	int		len;
	char	*str;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(*strs++);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	temp = ft_strs(size, strs, sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			temp[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			temp[k++] = sep[j++];
		i++;
	}
	temp[k] = '\0';
	return (temp);
}


int	main(int ac, char **av)
{
	printf("%s\n", ft_strjoin(ac - 1, av + 1, " "));
	free(ft_strjoin(ac - 1, av + 1, " "));
	return (0);
}

/*int	main(void)
{
	char *strs[] = {"hello", "world", "!"};
	char *r = ft_strjoin(4, strs, " ");

	printf("%s\n", r);
	free(r);
	return (0);
}*/
