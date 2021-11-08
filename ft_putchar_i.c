
#include <unistd.h>

int	ft_putchar_i(char c)
{
	int i;

	i = (int)write(1, &c, sizeof(char));
	return (i);
}
