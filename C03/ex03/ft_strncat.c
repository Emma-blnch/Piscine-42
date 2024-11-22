/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:56:54 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/27 11:05:21 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i] && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*
int main()
{
	char b[] = "general kenobi!";
	char a[20] = "Hello there,";
	int nb = 5;

	char *temp = ft_strncat(a, b, nb);
	printf("ma fonction : %s\n", temp);
	printf("le man : %s\n", strncat(a, b, 5));
}*/
