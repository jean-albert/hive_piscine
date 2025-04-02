#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{

    char	test1[] = "HelloWorld";
    char	test2[] = "HELLOWORLD";

    printf("Test 1 HelloWorld: %s\n", ft_strlowcase(test1));
    printf("Test 2 HELLOWORLD: %s\n", ft_strlowcase(test2));
    return (0);

}
