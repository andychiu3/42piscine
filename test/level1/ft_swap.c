#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	main() // need to know more about the this part
{
	int	a = 10;
	int	b = 20;

	int	*x = &a;
   	int	*y = &b;
	ft_swap(x, y);
	printf("%d\n%d", a, b);
	return (0);
	}	
