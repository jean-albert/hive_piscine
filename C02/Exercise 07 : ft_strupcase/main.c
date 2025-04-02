#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{

    char	test1[] = "HelloWorld";
    char	test2[] = "helloworld";

    printf("Test 1 HelloWorld: %s\n", ft_strupcase(test1));
    printf("Test 2 helloworld: %s\n", ft_strupcase(test2));
    return (0);

}
