/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbhattac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:20:19 by kbhattac          #+#    #+#             */
/*   Updated: 2024/10/06 17:39:14 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*read_file(char *filename)
{
	int		fd;
	int		ret;
	char	*buffer;

	buffer = malloc(1025);
	if (!buffer)
		return (NULL);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	ret = read(fd, buffer, 1024);
	if (ret == -1)
		return (NULL);
	buffer[ret] = '\0';
	close(fd);
	return (buffer);
}
