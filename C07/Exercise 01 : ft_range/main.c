#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{

    int	i;
    int	min;
    int	max;
    int	*range;

    i = 0;
    min = 4
    max = 10;
    range = ft_range(min, max);
    if (range != NULL)
    {
        while (i < (max - min))
        {
            printf("%d\n", range[i]);
            i++;
        }
        return (0);
    }

}
