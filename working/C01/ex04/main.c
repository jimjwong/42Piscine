#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a = 9;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	write(1, &"0123456789"[a], 1);
	write(1, " ", 1);
	write(1, &"0123456789"[b], 1);
	return (0);
}
