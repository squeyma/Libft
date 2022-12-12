# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saabail <saabail@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 10:46:06 by saabail           #+#    #+#              #
#    Updated: 2022/10/18 19:35:48 by saabail          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C = cc

FLAGS = -Wall -Werror -Wextra

SRCS = ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_memset.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlcat.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
				
LIBC = ar -rcs

OBJS = ${SRCS:.c=.o}

RM = rm -f
	
${NAME} : ${OBJS}
		${LIBC} ${NAME} ${OBJS}

all : ${NAME}

clean : 
		${RM} ${OBJS}
		
fclean : clean
			${RM} ${NAME}

re : all clean fclean

.PHONY: all clean fclean re