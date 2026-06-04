#include <unistd.h>

int ft_strlen(char *str);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int	count;

	count = ft_strlen("universe");
	ft_putchar(count + '0');
	return (0);
}
