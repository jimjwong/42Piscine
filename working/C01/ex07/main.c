#include <unistd.h>

void ft_rev_int_tab(int *tab, int size);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int	nums[5] = {1,8,3,4,5};
	int	i;

	ft_rev_int_tab(nums, 5);
	i = 0;
	while (i < 5)
	{
		ft_putchar(nums[i]+'0');
		i++;
	}
	return (0);
}
