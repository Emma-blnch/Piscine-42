/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:50:31 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/26 13:14:09 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
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
	char s1[] = "24";
	char s2[] = "12";
	unsigned int n = 1;

	int tru = ft_strncmp(s1, s2, n);

	printf("s1 = %s, s2 = %s, donc %d\n", s1, s2, tru);
	
	int check = strncmp(s1, s2, n);

	printf("%d\n", check);

}*/
