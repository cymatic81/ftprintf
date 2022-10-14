#include <stdio.h>
#include "ft_printf.h"

int main ()
{
	char	*str = "hello";
	int		len = 0;

	
	len = ft_strlen(str);
	printf("a:%s\n:", str);
	return(0);
}
