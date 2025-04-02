#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{

    int	a;
    int	b;

    a = 12;
    b = 21;
    printf("Before swapping: a = %d and b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("After swapping: a = %d and b = %d\n", a, b);
    return (0);

}
