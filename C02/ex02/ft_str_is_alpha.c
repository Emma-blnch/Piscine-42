/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:23:50 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/24 14:28:01 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
	char test[] = "abdcd";

	int tru = ft_str_is_alpha(test);
	int fal = ft_str_is_alpha(str);

	printf("True one : %d\n", tru);
	printf("False one :%d", fal);
}*/
