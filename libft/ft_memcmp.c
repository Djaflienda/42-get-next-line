/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:32:15 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 15:33:32 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_pointer;
	const unsigned char	*s2_pointer;

	s1_pointer = s1;
	s2_pointer = s2;
	i = 0;
	while (i < n && s1_pointer[i] == s2_pointer[i])
		i++;
	if (i == n)
		return (0);
	return (s1_pointer[i] - s2_pointer[i]);
}
