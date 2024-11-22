/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:03:13 by eblancha          #+#    #+#             */
/*   Updated: 2024/10/09 11:05:44 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			*temp;
	unsigned int	size;
	unsigned int	nb;

	temp = base;
	size = check_base(base);
	if (size == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -nbr;
	}
	else
		nb = nbr;
	if (nb >= size)
	{
		ft_putnbr_base(nb / size, base);
	}
	ft_putchar(base[nb % size]);
}
/*
int main()
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-756, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
	write(1, "\n", 1);
}*/
