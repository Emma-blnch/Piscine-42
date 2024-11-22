/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:07:35 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/27 14:30:20 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		i = 1;
		while (nb > 1)
		{
			i *= nb;
			nb--;
		}
	}
	return (i);
}
/*
int main(int argc, char *argv[])
{
	printf("la factorielle est %d\n", ft_iterative_factorial(5));
}*/
