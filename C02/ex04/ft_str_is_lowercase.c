/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:12:25 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/24 14:26:50 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	char str[] = "HeLLo";
	char test[] = "hello";

	int tru = ft_str_is_lowercase(test);
	int fal = ft_str_is_lowercase(str);

	printf("True one : %d\n", tru);
	printf("False one : %d", fal);
}*/
