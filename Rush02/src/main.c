/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:16:42 by kisingh           #+#    #+#             */
/*   Updated: 2024/10/06 18:08:37 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	checkstr(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (*argv[argc - 1] < 48)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*dict;
	t_pair	*pairs;

	checkstr(argc, argv);
	if (argc == 3)
		dict = read_file(argv[1]);
	else
		dict = read_file("numbers.dict.txt");
	if (!dict)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	pairs = extract_pairs(dict);
	convert_numbers(pairs, argv[argc - 1]);
	free(dict);
	free(pairs);
	return (0);
}
