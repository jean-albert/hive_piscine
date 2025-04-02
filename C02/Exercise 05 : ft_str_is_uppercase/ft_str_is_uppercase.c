int	ft_str_is_uppercase(char *str)
{

    int		i;
    int		retour;
    char	        c;

    i = 0;
    retour = 1;
    while (str[i] != '\0')
    {
        c = str[i];
        if (c < 65 || c > 90)
        {
            retour = 0;
        }
        i++;
    }
    return (retour);

}
