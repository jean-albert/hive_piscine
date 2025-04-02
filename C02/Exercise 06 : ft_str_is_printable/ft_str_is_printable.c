int	ft_str_is_printable(char *str)
{

    int		i;
    int		retour;
    char	        c;

    i = 0;
    retour = 1;
    while (str[i] != '\0')
    {
        c = str[i];
        if (c < 32)
        {
            retour = 0;
        }
        i++;
    }
    return (retour);

}
