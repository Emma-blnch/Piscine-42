/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:42:42 by eblancha          #+#    #+#             */
/*   Updated: 2024/10/10 10:44:01 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*
int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}

char    *ft_strdup(char *src)
{
        int             len;
        int             i;
        char    *dup;

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

struct  s_stock_str     *ft_strs_to_tab(int ac, char **av)
{
        t_stock_str     *result;
        int                     i;

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

int main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
}*/
