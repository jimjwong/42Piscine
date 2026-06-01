#include <unistd.h>

void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);

int main (void)
{
    ft_putchar('J');
    ft_putchar('a');
    write(1, "\n", 1);
    ft_print_alphabet();
    write(1, "\n", 1);
    ft_print_reverse_alphabet();
    write(1, "\n", 1);
    ft_print_numbers();
    write(1, "\n", 1);
    ft_is_negative(-5);
    ft_is_negative(5);
    ft_is_negative(0);
    write(1, "\n", 1);
    ft_print_comb();
    return (0);
}