
#include <printf.h>
#include "ft_printf.h"

int	main(void)
{
//	int				num = -359;
//	unsigned int	unum = 1488;
//	char			*str = "biba";
	char			*null_p;

	null_p = NULL;
//	printf("%d\n", printf("textstart\n%%c:%c\n%%s:%s\n%%p:%p\n%%d:%d\n%%i:%i\n%%u:%u\n%%x:%x\n%%X:%X\ntextend\n%   .",
//						  'i', str, &str, num, num, unum, 10, 10, 1));
//	printf("\n---------\n");
//	printf("%d\n", ft_printf("textstart\n%%c:%c\n%%s:%s\n%%p:%p\n%%d:%d\n%%i:%i\n%%u:%u\n%%x:%x\n%%X:%X\ntextend\n%m   .",
//						  'i', str, &str, num, num, unum, 10, 10, 1));
//	printf("%d\n", printf("\n\n\n%   "));
//	printf("/%d\n", printf("%009.  m"));
//	printf("/%d\n", ft_printf(NULL));
	printf("/%d", printf(" NULL %s NULL ", NULL));
	printf("\n");
	printf("/%d", ft_printf(" NULL %s NULL ", NULL));
	return (0);
}
