#include <unistd.h>

void ft_sort_int_tab(int *tab, int size);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int size = 8;
	int tab[8]= {9,4,3,6,2,1,3,7};
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	ft_sort_int_tab(tab, size);
	ft_putchar(' ');
	while (j < size)
	{
		ft_putchar(tab[j] + '0');
		j++;
	}
}
