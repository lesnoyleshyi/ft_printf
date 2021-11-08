#include "ft_printf.h"

int	ft_putstr_i(char *s)
{
	int	i;
	
	i = 0;
	if (s)
	{
		while (*s)
			i += (int)write(1, s++, sizeof(char));
	}
	return (i);
}