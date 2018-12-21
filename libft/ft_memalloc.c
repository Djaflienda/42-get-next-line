/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:16:40 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 15:17:31 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc(sizeof(char) * size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, size);
	return (mem);
}
