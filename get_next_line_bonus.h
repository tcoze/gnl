/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoze <tcoze@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:07:50 by tcoze             #+#    #+#             */
/*   Updated: 2024/01/06 17:07:50 by tcoze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# define MAX_FD 1024

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

char		*get_next_line(int fd);
char		*ft_bzero(char *s, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
long int	ft_strchr(char *s, char c);
char		*ft_strjoin(char *s1, char *s2);
size_t		ft_strlen(const char *s);

#endif
