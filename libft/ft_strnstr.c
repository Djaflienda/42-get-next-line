/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:07:38 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 16:45:10 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	index;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	index = 0;
	while (*haystack && index < len)
	{
		j = 0;
		if (*haystack == needle[j])
		{
			while (needle[j] && needle[j] == haystack[j]
											&& index + j < len)
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack);
		}
		haystack++;
		index++;
	}
	return (NULL);
}
