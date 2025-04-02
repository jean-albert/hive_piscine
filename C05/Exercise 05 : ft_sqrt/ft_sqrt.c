int	ft_sqrt(int nb)
{

    int	i;

    i = 1;
    if (nb > 0)
    {
        while (i < nb / i)
        {
            ++i;
        }
        if (i * i == nb)
        {
            return (i);
        }
    }
    return (0);

}
