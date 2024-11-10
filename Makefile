# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sferrad <sferrad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 10:06:51 by sferrad           #+#    #+#              #
#    Updated: 2024/11/09 16:47:38 by sferrad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= 	ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_bzero.c ft_isascii.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c
OBJS	= $(SRCS:.c=.o)

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re
