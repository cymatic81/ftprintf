#include <stdio.h>
#include "ft_printf.h"
//#include "ft_printf.c"
//#include "libft/ft_strlen.c"


int main()
{
	char *a = "Hello";
	int i = 0;

	i = ft_printf(a);
	printf("%s is %i characters long.\n", a, i);
return(0);
}
