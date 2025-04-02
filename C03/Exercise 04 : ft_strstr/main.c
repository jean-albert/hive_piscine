#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{

    char	*str;
    char	*to_find;

    str = "Test Hello World!";
    to_find = "t";
    printf("Haystack: %s\n", str);
    printf("Needle: %s\n", to_find);
    printf("With strstr: %s\n", strstr(str, to_find));
    printf("With ft_strstr: %s\n", ft_strstr(str, to_find));

}
