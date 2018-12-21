/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:09:53 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 16:10:20 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s) + 1;
	while (i-- >= 0)
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (NULL);
}
