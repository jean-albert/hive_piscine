int	ft_is_prime(int nb)
{

    int	i;

    i = 2;

        if (nb > 2147483647)

        return (0);
    if (nb <= 1)
        return (0);
    while (nb % i != 0)
    {
        i++;
    }
    if (i == nb)
        return (1);
    else
        return (0);

}
