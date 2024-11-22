/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:12:25 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/24 14:37:58 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	char str[] = "helLo";
	char test[] = "HELLO";

	int tru = ft_str_is_uppercase(test);
	int fal = ft_str_is_uppercase(str);

	printf("True one : %d\n", tru);
	printf("False one : %d", fal);
}*/
