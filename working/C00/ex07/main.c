#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(3122);
	write(1, "\n", 1);
	ft_putnbr(-12);
	return (0);
}



