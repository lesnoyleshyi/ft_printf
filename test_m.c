
#include <printf.h>
#include "ft_printf.h"

int	main(void)
{
	char	*str = "biba";
	char	*base = "0123456789ABCDEF";

	printf("text %p\n", &str);
	ft_putnbr_base((unsigned long long)&str, base);
	return (0);
}
