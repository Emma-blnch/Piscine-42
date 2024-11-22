/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:09:34 by eblancha          #+#    #+#             */
/*   Updated: 2024/10/06 20:21:03 by kisingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	print_error(void)
{
	write(1, "Error\n", 6);
	return ;
}

void	convert_numbers(t_pair *pairs, char *nbr)
{
	int		n;
	int		i;
	char	*word;

	if (pairs->number < 0)
		print_error();
	i = 0;
	while (i < 41)
	{
		n = ft_atoi(nbr);
		if (n > 20 && (n % 10 != 0))
		{
			convert_numbers_diff(pairs, n);
			return ;
		}
		if (n == pairs[i].number)
		{
			word = pairs[i].word;
			write(1, word, ft_strlen(word));
			write(1, "\n", 1);
			return ;
		}
		i += 1;
	}
	write(1, "Dict error\n", 10);
}
