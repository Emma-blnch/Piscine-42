/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_pair.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:22:08 by eblancha          #+#    #+#             */
/*   Updated: 2024/10/06 18:16:52 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

t_pair	*extract_pairs(char *dict)
{
	int		i;
	int		j;
	t_pair	*pairs;

	i = 0;
	j = 0;
	pairs = malloc(sizeof(t_pair) * 100);
	if (!pairs)
		return (NULL);
	while (dict[i])
	{
		pairs[j].number = ft_atoi(&dict[i]);
		while (dict[i] >= '0' && dict[i] <= '9')
			i++;
		while (dict[i] == ' ' || dict[i] == ':')
			i++;
		pairs[j].word = &dict[i];
		while (dict[i] && dict[i] != '\n')
			i++;
		if (dict[i] == '\n')
			dict[i++] = '\0';
		j++;
	}
	return (pairs);
}
