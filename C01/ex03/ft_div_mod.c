/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:31:50 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/23 12:05:08 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
	int div, mod, i, j;
	i = 42;
	j = 21;

	ft_div_mod(i, j, &div, &mod);
	printf("%d / %d = %d avec mod %d", i, j, div, mod);
}*/
