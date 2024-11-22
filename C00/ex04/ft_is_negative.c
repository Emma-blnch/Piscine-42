/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:25:49 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/23 12:16:05 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

/*
int main()
{
	ft_is_negative(42);
	write(1, "\n", 1);
	ft_is_negative(-42);
	write(1, "\n", 1);
	ft_is_negative(0);
}*/
