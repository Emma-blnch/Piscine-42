/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:19:20 by eblancha          #+#    #+#             */
/*   Updated: 2024/10/01 11:41:45 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
/*
int main()
{
	char s1[] = "2555";
	char s2[] = "A";

	int tru = ft_strcmp(s1, s2);

	printf("s1 = %s, s2 = %s, donc %d\n", s1, s2, tru);

	int check = strcmp(s1, s2);

	printf("fonction du man : %d\n", check);
}*/
