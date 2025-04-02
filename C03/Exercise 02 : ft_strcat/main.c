#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{

    char	dest[] = "Hello ";
    char	src[] = "World";

    printf("dest: %s\n", dest);
    printf("src: %s\n", src);
    printf("dest+src: %s\n", ft_strcat(dest, src));

}
