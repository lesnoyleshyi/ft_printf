
#include <printf.h>
#include "ft_printf.h"

int	main(void)
{
	int				num = -359;
	unsigned int	unum = 1488;
	char			*str = "biba";

	printf("%d\n", printf("textstart\n%%c:%c\n%%s:%s\n%%p:%p\n%%d:%d\n%%i:%i\n%%u:%u\n%%x:%x\n%%X:%X\ntextend",
						  'i', str, &str, num, num, unum, 10, 10));
	printf("\n---------\n");
	printf("%d\n", ft_printf("textstart\n%%c:%c\n%%s:%s\n%%p:%p\n%%d:%d\n%%i:%i\n%%u:%u\n%%x:%x\n%%X:%X\ntextend",
						  'i', str, &str, num, num, unum, 10, 10));
//	printf("%d\n", printf("\n\n\n%   "));
	return (0);
}
