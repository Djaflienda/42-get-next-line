/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:38:36 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 15:40:25 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_pointer;
	const char	*src_pointer;
	size_t		i;

	dst_pointer = dst;
	src_pointer = src;
	i = 0;
	if (src_pointer < dst_pointer)
		while ((int)--len >= 0)
			dst_pointer[len] = src_pointer[len];
	else
	{
		while (i < len)
		{
			dst_pointer[i] = src_pointer[i];
			i++;
		}
	}
	return (dst);
}
