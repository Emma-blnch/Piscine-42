/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfoubert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:57:31 by kfoubert          #+#    #+#             */
/*   Updated: 2024/09/21 13:02:47 by kfoubert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_the_right_char(int x, int y, int col, int row)
{
	if (row == 0 || row == (y - 1))
	{
		if (col == 0 || col == (x - 1))
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else
	{
		if (col == 0 || col == (x - 1))
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush00(int x, int y)
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			ft_print_the_right_char(x, y, col, row);
			col++;
		}
		if (col > 0)
			ft_putchar('\n');
		row++;
	}
}
