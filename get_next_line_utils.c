/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:19:33 by lcampos-          #+#    #+#             */
/*   Updated: 2023/08/02 21:54:49 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	if (!str)
		return (0);
	while (str[x] && str[x] != '\n')
	{
		x++;
	}
	return (x + (str[x] == '\n'));
}

char	*ft_joinstr(char *str1, char *str2)
{
	int		n;
	int		x;
	char	*join;
	int		s2_len;

	n = 0;
	x = 0;
	s2_len = ft_strlen(str2);
	join = malloc((ft_strlen(str1)) + (ft_strlen(str2)) + 1);
	if (!join)
		return (0);
	while (str1 && str1[x])
	{
		join[x] = str1[x];
		x++;
	}
	while (str2 && n < s2_len)
	{
		join[x++] = str2[n++];
	}
	if (str1)
		free(str1);
	join[x] = '\0';
	return (join);
}

// 1 find the index of \n
// 2 copy that amount of chars from buf to line
// 3 shift all the elemnts in buff by that amount of elements
// fill the end of the buu with \0

char	*ft_clear(char *buff)
{
	int	i;

	i = 0;
	while (buff[i])
	{
		buff[i] = 0;
		i++;
	}
	return (NULL);
}

void	findn(char *buffer, int *flag)
{
	int	x;
	int	n;

	x = 0;
	n = 0;
	while (buffer[x])
	{
		if (*flag)
			buffer[n++] = buffer[x];
		if (buffer[x] == '\n')
			*flag = 1;
		buffer[x++] = 0;
	}
}
