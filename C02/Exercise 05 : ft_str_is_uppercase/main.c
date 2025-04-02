#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{

    char	test1[] = "HelloWorld";
    char	test2[] = "HELLOWORLD";
    char	test3[] = "TESTING123";
    char	test4[] = "";

    printf("Test 1 HelloWorld: %d\n", ft_str_is_uppercase(test1));
    printf("Test 2 HELLOWORLD: %d\n", ft_str_is_uppercase(test2));
    printf("Test 3 TESTING123: %d\n", ft_str_is_uppercase(test3));
    printf("Test 4   : %d\n", ft_str_is_uppercase(test4));
    return (0);

}
