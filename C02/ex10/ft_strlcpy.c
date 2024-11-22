/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:40:35 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/24 16:49:41 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size != 0)
	{
		while ((src[i]) && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
int main ()
{
	char src[] = "abcde";
	char dest[] = "1234567";

	unsigned int res = ft_strlcpy(dest, src, 5);
	
	printf("%d", res);
}*/
