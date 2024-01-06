/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoze <tcoze@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:08:02 by tcoze             #+#    #+#             */
/*   Updated: 2024/01/06 17:08:02 by tcoze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_bzero(char *s, size_t n)
{
	if (!s)
		return (NULL);
	while (n != 0)
	{
		n--;
		s[n] = '\0';
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	if (size != 0)
		if (((nmemb * size) / size) != nmemb)
			return (NULL);
	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb);
	return (str);
}

long int	ft_strchr(char *s, char c)
{
	long int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

char	*ft_strjoin(char *s1, char *buf)
{
	size_t	s1len;
	size_t	buflen;
	size_t	i;
	size_t	p;
	char	*s_out;

	i = 0;
	p = 0;
	s1len = ft_strlen(s1);
	buflen = ft_strlen(buf);
	s_out = ft_calloc(s1len + buflen + 1, 1);
	if (!s_out)
		return (free (s1), NULL);
	while (i < s1len)
	{
		s_out[i] = s1[i];
		i++;
	}
	while (p < buflen)
	{
		s_out[i + p] = buf[p];
		p++;
	}
	return (free (s1), s_out);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}
