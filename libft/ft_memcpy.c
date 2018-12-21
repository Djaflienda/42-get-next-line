/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:33:49 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 15:35:17 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst_pointer;
	const char	*src_pointer;

	dst_pointer = dst;
	src_pointer = src;
	i = 0;
	while (i < n)
	{
		dst_pointer[i] = src_pointer[i];
		i++;
	}
	return (dst);
}
