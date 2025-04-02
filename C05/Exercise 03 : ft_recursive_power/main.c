#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main(void)
{

    int	nb;
    int	power;

    nb = 5;
    power = 4;
    printf("%d\n", ft_recursive_power(nb, power));

}
