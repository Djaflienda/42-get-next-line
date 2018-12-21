/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:10:40 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 17:04:25 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**res;

	if (!s || !c)
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char *)\
					* (ft_define_words_count(s, c) + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > j)
			(res[k] = ft_strndup(s + j, i - j)) && (k++);
	}
	res[k] = NULL;
	return (res);
}
