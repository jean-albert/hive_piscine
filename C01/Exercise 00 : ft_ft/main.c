#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{

    int	nbr;

    nbr = 0;
    printf("Before calling ft_ft, nbr = %d\n", nbr);
    ft_ft(&nbr);
    printf("After calling ft_ft, nbr = %d\n", nbr);
    return (0);

}
