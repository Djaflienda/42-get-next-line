/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:46:37 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/20 19:12:02 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str != '\0')
	{
		if (*str == (char)ch)
			return ((char*)str);
		str++;
	}
	if (ch == '\0')
		return ((char*)str);
	return (0);
}
