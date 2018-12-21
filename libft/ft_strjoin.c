/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:54:39 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 15:56:32 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;

	if (!s1 || !s2)
		return (NULL);
	temp = (char *)malloc(sizeof(char)\
				* (ft_strlen(s1) + (ft_strlen(s2) + 1)));
	if (!temp)
		return (NULL);
	ft_strcpy(temp, s1);
	ft_strcat(temp, s2);
	return (temp);
}
