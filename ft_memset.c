/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrad <sferrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:42:34 by sferrad           #+#    #+#             */
/*   Updated: 2024/11/10 10:45:30 by sferrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{	
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) s;
	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}
