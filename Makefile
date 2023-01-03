# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 21:13:44 by rcaldas-          #+#    #+#              #
#    Updated: 2022/11/29 19:55:10 by rcaldas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint \
ft_memcpy ft_memset ft_strjoin ft_strlen ft_memmove ft_strlcpy \
ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp \
ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup \
ft_substr ft_strtrim ft_strmapi ft_striteri ft_split ft_itoa \
ft_strcpy ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

OBJS = ${SRCS:=.o}

BOBJ = $(BONUS:=.o)

CC		= cc

RM		= rm -f

CFLAGS = -Wall -Werror -Wextra
		
$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

bonus:	$(BOBJ)
		@ar	-r $(NAME) $(BOBJ)

clean:
		${RM} ${OBJS} $(BOBJ)

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re bonus