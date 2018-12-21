/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:15:11 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 15:16:24 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_itoa(int n)
{
	char			*res;
	int				reslen;
	unsigned int	ncopy;

	ncopy = n;
	if (n >= 0)
		reslen = ft_intlen(n);
	else
	{
		ncopy = -n;
		reslen = ft_intlen(n) + 1;
	}
	if (!(res = ft_strnew(reslen)))
		return (NULL);
	while (reslen >= 1)
	{
		res[reslen-- - 1] = ncopy % 10 + '0';
		ncopy /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
