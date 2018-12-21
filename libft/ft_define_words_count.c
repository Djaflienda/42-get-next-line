/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_words_count.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:03:00 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 17:04:02 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_define_words_count(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (counter);
}
