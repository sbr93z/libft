/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrad <sferrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:06 by sferrad           #+#    #+#             */
/*   Updated: 2024/11/10 16:08:08 by sferrad          ###   ########.fr       */
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

int	ft_isascii(int	c);

void	ft_bzero(void *s, size_t n);

int	ft_isdigit(int c);

int	ft_isalpha(int c);

int	ft_isalnum(int c);

int	ft_atoi(const char *nptr);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strrchr(const char *s, int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *s);

int	ft_tolower(int c);

int	ft_toupper(int c);
#endif