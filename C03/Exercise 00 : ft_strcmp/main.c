#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{

    char	*s1;
    char	*s2;

    s1 = "ABCDEFG";
    s2 = "ABCDEFGH";
    printf("Comparison of %s and %s with ft_strcmp: %d\n", s1, s2, ft_strcmp(s1, s2));
    printf("Comparison of %s and %s with strcmp: %d\n", s1, s2, strcmp(s1, s2));

}
