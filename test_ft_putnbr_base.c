
#include <stdio.h>

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long long nbr, const char *base);

int	main(void)
{
//	unsigned int	uint;
	char			base_low[] = "0123456789abcdef";
//	char 			base_up[] = "0123456789ABCDEF";

	//	uint = 4294967295;
	ft_putnbr_base(4294967295, base_low);
	printf("\n");
	printf("%x\n", 4294967295);
}

void	ft_putnbr_base(unsigned long long nbr, const char *base)
{
	size_t		base_len;
//	static char	flag;

	if (!base)
		return ;
	base_len = ft_strlen(base);
//	if (base_len == 16 && !flag)
//	{
//		write(1, "0x", 2);
//		flag = 1;
//	}
	if (nbr / base_len != 0)
	{
		ft_putnbr_base(nbr / base_len, base);
		write(1, &base[nbr % base_len], 1);
	}
	else
		write(1, &base[nbr], 1);
}
