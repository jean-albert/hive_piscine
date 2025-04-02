int		ft_putchar(char c);
void	ft_firstline(int width, int x);
void	ft_middleline(int width, int x);
void	ft_lastline(int width, int x);

void	rush(int x, int y)
{

    int	width;
    int	height;

    if (x <= 0 || y <= 0)
        return ;
    height = 1;
    while (height <= y)
    {
        width = 1;
        while (width <= x)
        {
            if (height == 1)
                ft_firstline(width, x);
            else if (height == y)
                ft_lastline(width, x);
            else
                ft_middleline(width, x);
            ++width;
        }
        ft_putchar('\n');
        ++height;
    }

}

void	ft_firstline(int width, int x)
{

    if (width == 1)
        ft_putchar('A');
    else if (width == x)
        ft_putchar('C');
    else
        ft_putchar('B');

}

void	ft_middleline(int width, int x)
{

    if (width == 1 || width == x)
        ft_putchar('B');
    else
        ft_putchar(' ');

}

void	ft_lastline(int width, int x)
{

    if (width == 1)
        ft_putchar('C');
    else if (width == x)
        ft_putchar('A');
    else
        ft_putchar('B');

}
