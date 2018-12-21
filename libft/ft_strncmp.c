/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:02:39 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 16:03:09 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > 0 && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	return (n) ? (*((unsigned char *)&s1[i]) - *((unsigned char *)&s2[i])) : 0;
}
