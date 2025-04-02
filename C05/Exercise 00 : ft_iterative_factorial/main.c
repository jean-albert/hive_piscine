#include <unistd.h>
#include <stdio.h>

int    ft_iterative_factorial(int nb);

int    main(void)
{
        int	nb;

    nb = 5;
    printf("%d\n", ft_iterative_factorial(nb));

        return (0);
}
