/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:02:52 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/25 10:30:06 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
/*
int main(void)
{
	int tab[10] = {1, 5, 8, 3, 6, 4, 2, 9, 10, 7};
	
	printf("avant :\n");
	for(int i =0; i<10; i++)
	{
		if(i < 10)
			printf("%i ", tab[i]);
		else
			printf("%i", tab[i]);
	}

	ft_sort_int_tab(tab, 10);
	
	printf("\n");
	printf("apres :\n");
	for(int i =0; i<10; i++)
	{
		printf("%i ", tab[i]);
	}
}*/
