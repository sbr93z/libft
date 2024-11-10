/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrad <sferrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:06 by sferrad           #+#    #+#             */
/*   Updated: 2024/11/09 16:32:49 by sferrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int	ft_isprint(int	c);
int	isascii(int	c);
void	ft_bzero(void *s, size_t n);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);

#endif