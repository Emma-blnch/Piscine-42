/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:21:07 by eblancha          #+#    #+#             */
/*   Updated: 2024/10/02 16:54:11 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	len;

	j = min;
	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (len));
	if (*range)
	{
		while (i < len)
		{
			(*range)[i] = j + i;
			i++;
		}
		return (len);
	}
	else
		return (-1);
}
/*
int main()
{
	int *range;

	printf("0 a 5 : %d\n", ft_ultimate_range(&range, 0, 5));
	printf("0 a 0 : %d\n", ft_ultimate_range(&range, 0, 0));

	printf("-2147483648 a 2147483647 : %d\n", ft_ultimate_range(&range,
						-2147483648, 2147483647));
}*/
