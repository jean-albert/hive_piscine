#include <stdlib.h>

int	ft_strlen(char *str)
{

    int	len;

    len = 0;
    while (*str)
    {
        len++;
        str++;
    }
    return (len);

}

char	*ft_strcpy(char *dest, char *src)
{

    int	i;

    i = 0;
    while (src[i] != '\0')
    {
        *dest = src[i];
        i++;
        dest++;
    }
    return (dest);

}

int	return_len(int size, char **strs, int size_sep)
{

    int	i;
    int	len;

    i = -1;
    len = size_sep * -1;
    while (++i < size)
        len += size_sep + ft_strlen(strs[i]);
    return (len);

}

char	*ft_strjoin(int size, char **strs, char *sep)
{

    int		i;
    char	*result;
    int		len;

    if (size == 0)
    {
        result = (char *)malloc(1);
        return (result);
    }
    len = return_len(size, strs, ft_strlen(sep));
    i = -1;
    result = malloc(sizeof(char) * (len + 1));
    if (result == NULL)
        return (0);
    while (++i < size)
    {
        result = ft_strcpy(result, strs[i]);
        if (i + 1 < size)
            result = ft_strcpy(result, sep);
    }
    *result = '\0';
    return (result - len);

}
