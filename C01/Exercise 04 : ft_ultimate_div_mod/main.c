#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{

    int	a;
    int	b;

    a = 37;
    b = 5;
    ft_ultimate_div_mod(&a, &b);
    printf("Result = %d\n", a);
    printf("Remainder = %d\n", b);
    return (0);

}
