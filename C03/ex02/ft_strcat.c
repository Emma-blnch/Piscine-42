/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:56:54 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/26 14:24:03 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[n])
	{
		n++;
	}
	while (src[i])
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
/*
int main()
{
	char b[] = "there!";//src
	char a[10] = "Hello ";//dest

	char *temp = ft_strcat(a, b);
	printf("ma fonction : %s\n", temp);

	printf("celle du man : %s\n", strcat(a, b));
}*/
