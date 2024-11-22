/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:21:05 by eblancha          #+#    #+#             */
/*   Updated: 2024/10/04 11:10:28 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	nb;
	int	parity;

	nb = 0;
	parity = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb *= 10;
		nb += *str - 48;
		++str;
	}
	if (parity % 2 == 0)
		return (nb);
	else
		return (-nb);
}
/*
int main()
{
	char *s = "   ---+--+1234ab567";
	char *b = "asd123";
	char *c = "  asd12";
	char *d = "     -------45679s8";

	printf("%d\n", ft_atoi(s));
	printf("%d\n", ft_atoi(b));
	printf("%d\n", ft_atoi(c));
	printf("%d\n", ft_atoi(d));
}*/
