char	*ft_strcat(char *dest, char *src)
{

    char	*c;

    c = dest;
    while (*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (c);

}
