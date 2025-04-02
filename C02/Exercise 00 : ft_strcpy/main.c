#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{

    char	src[] = "Testing";
    char	dest[20];

    printf("Src: %s\n", src);
    printf("Dest before: %s\n", dest);
    ft_strcpy(dest, src);
    printf("Dest after: %s\n", dest);
    return (0);

}
