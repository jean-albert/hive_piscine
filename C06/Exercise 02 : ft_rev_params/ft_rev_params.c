#include <unistd.h>

void	ft_putchar(char c)
{

    write(1, &c, 1);

}

void	ft_rev_params(char *str)
{

    int	i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');

}

int	main(int argc, char **argv)
{

    int	i;

    i = argc;
    while (--i < argc && argv[i] != argv[0])

        {

        ft_rev_params(argv[i]);

        }
}
