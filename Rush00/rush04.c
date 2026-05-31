#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, char s, char m, char e )
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar(s);
		else
		{
			if (col == x)
				ft_putchar(e);
			else
				ft_putchar(m);
		}
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (row <= y)
	{
		if (row == 1)
			print_line(x, 'A', 'B', 'C');
		else
		{
			if (row == y)
				print_line(x, 'C', 'B', 'A');
			else
				print_line(x, 'B', ' ', 'B');
		}
		row++;
	}
}
