/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:38:36 by eblancha          #+#    #+#             */
/*   Updated: 2024/09/25 14:25:41 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		word;

	i = 0;
	while (str[i])
	{
		if (str[i - 1] >= 97 && str[i - 1] <= 122)
			word = 1;
		else if (str[i - 1] >= 48 && str[i - 1] <= 57)
			word = 1;
		else if (str[i -1] >= 65 && str[i - 1] <= 90)
			word = 1;
		else
			word = 0;
		if (str[i] >= 65 && str[i] <= 90 && word == 1)
			str[i] += 32;
		if (str[i] >= 97 && str[i] <= 122 && word == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int main()
{
	char c[] = "salut,    coMMent tu vas? 42mots; cinQuante+et+un";
	printf("%s\n", ft_strcapitalize(c));
	char d[] = "hello";
	printf("%s\n", ft_strcapitalize(d));
	char e[] = "HELLO";
	printf("%s\n", ft_strcapitalize(e));
	char f[] = "hello world";
	printf("%s\n", ft_strcapitalize(f));
	char g[] = "a1b2c3d4e5f6g7h8i9j0";
	printf("%s\n", ft_strcapitalize(g));
	char h[] = "a1b2c3d4e5 f6g7h8i9j0 +-++lol";
	printf("%s\n", ft_strcapitalize(h));

}*/
