int	ft_str_is_numeric(char *str)
{

    int		i;
    int		retour;
    char	        c;

    i = 0;
    retour = 1;
    while (str[i] != '\0')
    {
        c = str[i];
        if (c < 48 || c > 57)
        {
            retour = 0;
        }
        i++;
    }
    return (retour);

}
