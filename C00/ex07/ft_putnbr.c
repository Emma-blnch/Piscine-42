/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:36:57 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/23 16:58:04 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
		return ;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + 48);
}

/*
int main()
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(512);
	write(1, "\n", 1);
	ft_putnbr(-78);
	write(1, "\n", 1);
	ft_putnbr(0x7FFFFFFF);
}*/
