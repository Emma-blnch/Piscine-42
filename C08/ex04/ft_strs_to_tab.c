/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:34:29 by eblancha          #+#    #+#             */
/*   Updated: 2024/10/09 11:53:28 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	i = 0;
	result = malloc(sizeof(*result) * (ac + 1));
	if (!result)
		return (0);
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(result[i].str);
		i++;
	}
	result[i].str = 0;
	return (result);
}
/*
int main(int ac, char **av)
{
	t_stock_str *result;
	int i;

	i = 1;
	result = ft_strs_to_tab(ac, av);
	while (i < ac)
	{
		printf("size : %d\n", result[i].size);
		printf("str : %s\n", result[i].str);
		printf("copy : %s\n", result[i].copy);
		i++;
	}
}*/
