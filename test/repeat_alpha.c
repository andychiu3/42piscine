#include <unistd.h>

int	ft_repeat(char c)
{
	int	r = 0;

	if (c >= 'A' && c <= 'Z')
		r = c - 65 + 1;
	else if (c >= 'a' && c <= 'z')
		r = c - 97 + 1;
	else
		return (1);
	return (r);
}

int	main(int ac, char **av)
{
	int	i;
	int	r;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			r = ft_repeat(av[1][i]);
			while(r > 0) // this is important
			{
				write(1, &av[1][i], 1);
				r--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
