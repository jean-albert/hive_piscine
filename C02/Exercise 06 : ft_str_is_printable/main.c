#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{

    char	test1[] = "HelloWorld";
    char	test2[] = "\n\t\a";
    char	test3[] = "\ntesting\t";
    char	test4[] = "";

    printf("Test 1: %d\n", ft_str_is_printable(test1));
    printf("Test 2: %d\n", ft_str_is_printable(test2));
    printf("Test 3: %d\n", ft_str_is_printable(test3));
    printf("Test 4: %d\n", ft_str_is_printable(test4));
    return (0);

}
