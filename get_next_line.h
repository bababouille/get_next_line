/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:40:02 by vade-oli          #+#    #+#             */
/*   Updated: 2023/08/02 20:11:39 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h> //open, read
# include <limits.h>
# include <stddef.h> //size_t
# include <stdio.h>  //printf
# include <stdlib.h> //malloc, free
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
void	findn(char *buffer, int *v);
char	*ft_clear(char *buff);
char	*ft_joinstr(char *str1, char *str2);
int		ft_strlen(char *str);

#endif
