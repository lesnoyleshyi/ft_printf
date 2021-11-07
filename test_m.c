
#include <printf.h>
#include "ft_printf.h"

int	main(void)
{
	int				num = -359;
	unsigned int	unum = 1488;
	char			*str = "biba";
//	char			*base = "0123456789ABCDEF";

	printf("%d\n", printf("textstart\n%%c:%c\n%%s:%s\n%%p:%p\n%%d:%d\n%%i:%i\n%%u:%u\n%%x:%x\n%%X:%X\ntextend",
						  'i', str, &str, num, num, unum, 10, 10));
	printf("\n---------\n");
	printf("%d\n", ft_printf("textstart\n%%c:%c\n%%s:%s\n%%p:%p\n%%d:%d\n%%i:%i\n%%u:%u\n%%x:%x\n%%X:%X\ntextend",
						  'i', str, &str, num, num, unum, 10, 10));
	return (0);
}


int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				write(1, &format[++i], 1);
				i += 1;
			}
			else if (format[i + 1] == 'c')
			{
				ft_putchar_fd(va_arg(ap, int), 1);
				i += 2;
			}
			else if (format[i + 1] == 's')
			{
				ft_putstr_fd(va_arg(ap, char *), 1);
				i += 2;
			}
			else if (format[i + 1] == 'p')
			{
				ft_putnbr_base((unsigned long long)va_arg(ap, void *), "0123456789abcdef");
				i += 2;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				ft_putstr_fd(ft_itoa(va_arg(ap, long int)), 1);
				i += 2;
			}
			else if (format[i + 1] == 'u')
			{
				ft_putnbr_base(va_arg(ap, unsigned int), "0123456789");
				i += 2;
			}
			else if (format[i + 1] == 'x' || format[i + 1] == 'X')
			{
				if (format[i + 1] == 'x')
					ft_putnbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
				else
					ft_putnbr_base(va_arg(ap, unsigned long), "0123456789ABCDEF");
				i += 2;
			}
			else
			{
				//				i += ft_skip_spaces(void);
				write(1, "skip ", 5);
			}
		}
		write(1, &format[i++], 1);
	}
	va_end(ap);
	return (i);
}