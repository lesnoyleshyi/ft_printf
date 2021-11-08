#include "ft_printf.h"

int	ft_putstr_i(char *s)
{
	int	i;
	
	i = 0;
	if (s)
	{
		while (s[i])
			write(1, &s[i++], sizeof(char));
	}
	return (i);
}