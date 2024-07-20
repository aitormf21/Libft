# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 13:24:18 by aitormar          #+#    #+#              #
#    Updated: 2024/07/20 16:35:02 by aitormar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -rf


MY_SOURCES =ft_isdigit.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isprint.c\
						ft_strlen.c\
						ft_memset.c\
						ft_bzero.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_strlcpy.c\
						ft_strlcat.c\
						ft_toupper.c\
						ft_tolower.c\
						ft_strchr.c\
						ft_strrchr.c\
						ft_strncmp.c\


OBJS = $(MY_SOURCES:.c=.o)

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS)

all: $(NAME)

%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	@$(RM) $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
