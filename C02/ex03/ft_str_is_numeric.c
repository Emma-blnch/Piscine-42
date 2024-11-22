/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:23:50 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/24 14:27:10 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*
int main()
{
	char str[] = "12cd";
	char test[] = "12766";

	int tru = ft_str_is_numeric(test);
	int fal = ft_str_is_numeric(str);

	printf("True one : %d\n", tru);
	printf("False one : %d", fal);
}*/
