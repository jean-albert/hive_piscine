#include <unistd.h>
#include <stdio.h>

int    ft_recursive_factorial(int nb);

int	main(void)
{

    int	nb;

        nb = 5;

    printf("%d\n", ft_recursive_factorial(nb));
    return (0);

}
