#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{

    char	str[] = "Hello World";
    int		length = ft_strlen(str);

    printf("Length of the string: %s is ", str);
    printf("%d\n", length);
    return (0);

}
