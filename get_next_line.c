/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:39:46 by vade-oli          #+#    #+#             */
/*   Updated: 2023/08/02 21:56:29 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	buffer[BUFFER_SIZE + 1];
	int			flag;

	flag = 0;
	if (read(fd, 0, 0) < 0)
		return (ft_clear(buffer));
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (buffer[0] || read(fd, buffer, BUFFER_SIZE) > 0)
	{
		line = ft_joinstr(line, buffer);
		findn(buffer, &flag);
		if (flag == 1)
			break ;
	}
	return (line);
}

int    main(void)
{
    int        fd;
    char    *line;

    fd = open("d.txt", O_RDONLY);
    while (1)
    {
        line = get_next_line(fd);
        printf("%s", line);
        if (line == NULL)
            break ;
        free(line);
    }
    return (0);
}
