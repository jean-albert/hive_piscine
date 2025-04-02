#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{

    char	*strs[] = {"Salut", "les", "amis", "!"};
    char	*sep = "\n";
    int		size = sizeof(strs) / sizeof(strs[0]);
    char	*result = ft_strjoin(size, strs, sep);

    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    return (0);

}
