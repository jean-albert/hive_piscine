#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{

    char    *str;
    int    length;

    str = "There is 34 caracters in this line";
    printf("%s\n", str);
    length = ft_strlen(str);
    printf("Length of the string: %d\n", length);
    return (0);

}
