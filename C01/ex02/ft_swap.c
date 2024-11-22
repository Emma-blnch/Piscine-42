/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:39:25 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/23 12:04:29 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
int main(void)
{
	int a = 42;
	int b = 20;

	printf("avant : %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("apres : %d %d\n", a, b);
}*/
