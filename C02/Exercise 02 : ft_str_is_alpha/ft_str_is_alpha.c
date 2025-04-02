int	ft_str_is_alpha(char *str)
{

    int		i;
    int		retour;
    char	        c;

    i = 0;
    retour = 1;
    while (str[i] != '\0')
    {
        c = str[i];
        if (c < 65 || (c > 90 && c < 97) || c > 122)
        {
            retour = 0;
        }
        i++;
    }
    return (retour);

}
