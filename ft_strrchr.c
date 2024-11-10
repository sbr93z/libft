/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrad <sferrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:20:28 by sferrad           #+#    #+#             */
/*   Updated: 2024/11/10 13:57:20 by sferrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = (char *) s;
	i = 0;
	if (!s)
		return (NULL);
	while (p[i])
		i++;
	while (i >= 0)
	{
		if (p[i] == c)
			return (&p[i]);
		i--;
	}
	if (p[i] == c)
		return (&p[i]);
	return (NULL);
}
