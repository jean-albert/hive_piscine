#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{

    char	*str;

    str = "Salut !\n";
    ft_putstr(str);
    return (0);

}
