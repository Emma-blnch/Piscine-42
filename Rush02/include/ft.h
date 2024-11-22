/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:01:42 by eblancha          #+#    #+#             */
/*   Updated: 2024/10/06 19:43:29 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_pair
{
	int		number;
	char	*word;
}		t_pair;

t_pair	*extract_pairs(char *dict);
int		ft_atoi(char *str);
void	convert_numbers_diff(t_pair *pairs, int nbr);
void	convert_numbers(t_pair *pairs, char *number);
void	ft_putchar(char c);
int		ft_strlen(char *str);
char	*read_file(char *filename);

#endif
