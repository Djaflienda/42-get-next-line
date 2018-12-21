/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 19:06:56 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/20 19:23:19 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			*send_result(char *str, char **line)
{
	int			i;
	char		*del;
	char		*tmp;

	i = 0;
	tmp = ft_strnew(0);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	del = tmp;
	tmp = ft_strsub(str, i + 1, ft_strlen(&str[i]));
	(*line) = ft_strsub(str, 0, i);
	ft_strdel(&del);
	ft_strdel(&str);
	return (tmp);
}

int				get_next_line(const int fd, char **line)
{
	static char	*str[4096];
	char		buf[BUFF_SIZE + 1];
	int			read_bytes;
	char		*tmp;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	while (!ft_strchr(str[fd], '\n') &&
			(read_bytes = read(fd, buf, BUFF_SIZE)) > 0)
	{
		tmp = str[fd];
		buf[read_bytes] = '\0';
		str[fd] = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
	}
	if (*str[fd] != '\0')
	{
		str[fd] = send_result(str[fd], line);
		return (1);
	}
	return (0);
}
