#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char *argv[])
{

    int	value;

    if (argc != 2)
        return (1);
    value = ft_atoi(argv[1]);
    printf("%d\n", value);
    return (0);

}
