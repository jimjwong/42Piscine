/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimwong <jimwong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:35:23 by jimwong           #+#    #+#             */
/*   Updated: 2026/06/01 20:54:25 by jimwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_digits(int n, int digits[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(digits[i] + '0');
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	digits[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		digits[i] = i;
		i++;
	}
	while (1)
	{
		ft_print_digits(n, digits);
		if (digits[0] == 10 - n)
			break ;
		ft_putchar(',');
		ft_putchar(' ');
		i = n -1;
		while (digits[i] == 10 - (n - i))
			i--;
		digits[i]++;
		while (++i < n)
			digits[i] = digits[i - 1] + 1;
	}
}
