/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:17:52 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/24 14:28:28 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char str[] = "\n";
	char test[] = "HELLO";

	int tru = ft_str_is_printable(test);
	int fal = ft_str_is_printable(str);

	printf("True one :%d\n", tru);
	printf("False one :%d", fal);
}*/
