#include <ft.h>

void	convert_numbers_diff(t_pair *pairs, int nbr)
{
	int	i;
	int	temp;
	char		*word;

	i = 0;
	temp = nbr;
	nbr = nbr / 10;
	nbr *= 10;
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
	nbr = temp;
	nbr %= 10;
	i = 0;
	while (i < 41)
	{
		if (nbr == pairs[i].number)
		{
			word = pairs[i].word;
			write(1, word, ft_strlen(word));
			write(1, "\n", 1);
			return;
		}
		i++;
	}
}
