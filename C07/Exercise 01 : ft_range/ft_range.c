#include <stdlib.h>

int	*ft_range(int min, int max)
{

    int	i;
    int	*range;
    int	size;

    size = max - min;
    if (min >= max)
        return (NULL);
    range = malloc(sizeof(int) * size);
    if (range == NULL)
    {
        return (NULL);
    }
    i = 0;
    while (i < size)
    {
        range[i] = min + i;
        i++;
    }
    return (range);

}
