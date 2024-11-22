/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:35:49 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/23 12:09:55 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *a / *b;
	*b = i % *b;
}

/*
int main()
{
	int i, j;

	i = 42;
	j = 21;

	ft_ultimate_div_mod(&i, &j);
	printf("%d %d\n", i, j);
}*/
