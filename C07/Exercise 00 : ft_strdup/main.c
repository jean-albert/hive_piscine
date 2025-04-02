#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{

    char	*test1;
    char	*test2;

    if (argc == 2)
    {
        test1 = ft_strdup(argv[1]);
        test2 = strdup(argv[1]);
        printf(":%s:\n:%s:\n", test1, test2);
    }
    return (0);

}
