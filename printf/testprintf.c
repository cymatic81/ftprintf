#include <stdio.h>
#include "ft_printf.h"

int main()
{
	//char	*a = "World";
	char	b = 'A';
	ssize_t	i = 0;
	//unsigned int j = 0;

	printf("%zd characters printed to screen.\n", i);
	i = ft_printf("Hello :%-21c:\n", b);
	printf("Now there are %zd characters printed to screen.\n", i);
	return(0);
}
