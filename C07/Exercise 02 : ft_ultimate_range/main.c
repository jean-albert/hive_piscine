#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{

    int	min;
    int	max;
    int	*tab;
    int	size;

    min = 5;
    max = 10;
    size = ft_ultimate_range(&tab, min, max);
    printf("%d\n", size);

}
