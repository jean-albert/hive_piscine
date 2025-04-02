#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{

    char	test1[] = "HelloWorld";
    char	test2[] = "12345";
    char	test3[] = "Testing123";
    char	test4[] = "";

    printf("Test 1 HelloWorld: %d\n", ft_str_is_numeric(test1));
    printf("Test 2 12345: %d\n", ft_str_is_numeric(test2));
    printf("Test 3 Testing123: %d\n", ft_str_is_numeric(test3));
    printf("Test 4   : %d\n", ft_str_is_numeric(test4));
    return (0);

}
