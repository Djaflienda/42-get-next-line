/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:30:52 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 15:31:58 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s_pointer;

	s_pointer = s;
	i = 0;
	while (i < n)
	{
		if (s_pointer[i] == (char)c)
			return ((void *)&s_pointer[i]);
		i++;
	}
	return (NULL);
}
