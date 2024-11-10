/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrad <sferrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:09:23 by sferrad           #+#    #+#             */
/*   Updated: 2024/11/10 10:34:06 by sferrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t						i;
	unsigned char				*p;
	unsigned char				*f;

	p = (unsigned char *) dest;
	f = (unsigned char *) src;
	i = 0;
	if (!dest)
		return (NULL);
	while (i < n)
	{
		p[i] = f[i];
		i++;
	}
	return (dest);
}
