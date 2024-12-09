# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sferrad <sferrad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 20:08:36 by sferrad           #+#    #+#              #
#    Updated: 2024/11/23 19:15:37 by sferrad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS	= 	ft_printf.c ft_conv.c ft_conv2.c
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