/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:44:22 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/24 16:55:21 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		temp = tab[j];
		tab[j] = tab[i];
		tab[i] = temp;
		i++;
		j--;
	}
}

/*
int main()
{
	int tab[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	int i = 0;
	while (i<5)
	{	
		printf("%i ", tab[i]);
		i++;
	}
}*/
