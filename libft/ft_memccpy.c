/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:24:57 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 15:30:39 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dst_pointer;
	size_t	i;

	i = 0;
	dst_pointer = dst;
	while (i < n)
	{
		dst_pointer[i] = *(unsigned char *)&src[i];
		if (*(unsigned char *)&src[i] == (unsigned char)c)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
