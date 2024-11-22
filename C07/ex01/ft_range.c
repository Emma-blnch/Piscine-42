/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:21:07 by eblancha          #+#    #+#             */
/*   Updated: 2024/10/07 14:39:07 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;
	int	len;

	j = min;
	i = 0;
	len = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(tab) * (len));
	if (tab)
	{
		while (i < len)
		{
			tab[i] = j;
			i++;
			j++;
		}
		return (tab);
	}
	else
		return (NULL);
}
/*
int main()
{
	int *range;
	
	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0],
					range[1], range[2], range[3], range[4]);
	
	range = ft_range(4, 8);
	printf("4 a 8 : %d, %d, %d, %d\n", range[0], range[1], range[2], range[3]);
	
	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d\n", range[0], range[1]);
	free(tab);
}*/
