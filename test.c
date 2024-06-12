#include "ft_printf.h"

int main(void)
{
	int result = ft_printf(0);
	printf("%i", result);
	// int result = ft_printf("%c", 'c');
  	// ft_printf("\n%i characters were written\n\n", result);
	// result = ft_printf("%i", 564);
    // ft_printf("\n%i characters were written\n\n", result);
	// result = ft_printf(" NULL %s NULL ", NULL);
	// ft_printf("\n%i characters were written\n\n", result);
	// int result = ft_printf(" NULL %s NULL ", NULL);
	// ft_printf("\n%i characters were written\n\n", result);
	// result = ft_printf("%x", 15);
	// ft_printf("\n%i characters were written\n\n", result);
	// result = ft_printf("%%");
	// ft_printf("\n%i characters were written\n\n", result);
	// result = ft_printf("%u", 234);
	// ft_printf("\n%i characters were written\n\n", result);
	// int *ptr = &result;
    // result = ft_printf("%p", ptr);
	// ft_printf("\n%i characters were written\n\n", result);
}
/*
c --- 1 characters were written
564 -- 3 characters were written
string --- 6 characters were written
f --- 1 characters were written
% --- 1 characters were written
234 --- 3 characters were written
*/
