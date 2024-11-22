/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:20:41 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/23 14:51:25 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printn(int n)
{
	char	i;

	if (n < 10)
	{
		i = n + 48;
		ft_putchar('0');
		ft_putchar(i);
		return ;
	}
	else
	{
		i = (n / 10) + 48;
		ft_putchar(i);
		i = (n % 10) + 48;
		ft_putchar(i);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			printn(a);
			ft_putchar(' ');
			printn(b);
			if (!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
/*
int main()
{
	ft_print_comb2();
}*/
