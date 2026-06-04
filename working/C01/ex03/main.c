#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main (void)
{
	int a = 9;
	int b = 2;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	write(1, &"0123456789"[div], 1);
	write(1, " ", 1);
	write(1, &"0123456789"[mod], 1);
	return (0);
}
