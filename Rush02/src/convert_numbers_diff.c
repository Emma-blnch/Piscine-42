/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_numbers_diff.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:45:09 by kisingh           #+#    #+#             */
/*   Updated: 2024/10/06 20:23:06 by kisingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	print_word(t_pair *pairs, int nbr)
{
	char	*word;
	int		i;

	i = 0;
	while (i < 41)
	{
		if (nbr == pairs[i].number)
		{
			word = pairs[i].word;
			write(1, word, ft_strlen(word));
			write(1, " ", 1);
		}
		i++;
	}
}

void	convert_numbers_diff(t_pair *pairs, int nbr)
{
	int	temp;

	temp = nbr;
	nbr = nbr / 10;
	nbr *= 10;
	print_word(pairs, nbr);
	nbr = temp;
	nbr %= 10;
	print_word(pairs, nbr);
	return ;
}
