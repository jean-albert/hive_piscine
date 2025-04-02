#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{

    char	src[] = "0123456789";
    char	dest[11];
    int	size;

    size = 11;
    printf("Src: %s\n", src);
    printf("Dest before: %s\n", dest);
    ft_strncpy(dest, src, size);
    printf("Dest after: %s\n", dest);
    return (0);

}
