#include <unistd.h>

void ft_swap(int *a, int *b);
void ft_putchar(char c);

int main(void)
{
	int a = 3;
	int b = 8;
	
	ft_swap(&a, &b);
	ft_putchar(a + '0');
	ft_putchar(' ');
	ft_putchar(b + '0');
	return (0);;
}
