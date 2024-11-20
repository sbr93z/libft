# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sferrad <sferrad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 10:06:51 by sferrad           #+#    #+#              #
#    Updated: 2024/11/19 21:09:32 by sferrad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= 	ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_bzero.c ft_isascii.c ft_isprint.c\
			 ft_memcpy.c ft_memset.c ft_strlen.c ft_atoi.c ft_strncmp.c ft_strnstr.c\
			ft_strchr.c ft_strrchr.c ft_strdup.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_strlcat.c\
			ft_memcmp.c ft_memchr.c ft_calloc.c ft_memmove.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c\
			ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_strtrim.c ft_split.c
OBJS	= $(SRCS:.c=.o)
BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJSBONUS	= $(BONUS:.c=.o)
CC	= cc
CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)


clean:
	rm -f $(OBJS) $(OBJSBONUS)


fclean:	clean
	rm -f $(NAME)
re:	fclean $(NAME)

bonus: $(OBJS) $(OBJSBONUS)
	ar rcs $(NAME) $(OBJS) $(OBJSBONUS) 

.PHONY:	all clean fclean re
