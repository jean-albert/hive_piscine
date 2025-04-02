#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{

    char			dest[50] = "Hello ";
    char			src[] = "World";
    unsigned int		size;

    size = 50;
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);
    printf("With strncat: %s\n", strncat(dest, src, size));
    printf("With ft_strncat: %s\n", ft_strncat(dest, src, size));

}
