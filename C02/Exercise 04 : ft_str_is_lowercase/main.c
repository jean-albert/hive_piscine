#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{

    char	test1[] = "HelloWorld";
    char	test2[] = "helloworld";
    char	test3[] = "testing123";
    char	test4[] = "";

    printf("Test 1 HelloWorld: %d\n", ft_str_is_lowercase(test1));
    printf("Test 2 helloworld: %d\n", ft_str_is_lowercase(test2));
    printf("Test 3 testing123: %d\n", ft_str_is_lowercase(test3));
    printf("Test 4   : %d\n", ft_str_is_lowercase(test4));
    return (0);

}
