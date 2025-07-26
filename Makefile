# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 12:07:29 by msakurai          #+#    #+#              #
#    Updated: 2025/07/26 12:22:00 by msakurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

CC			:= cc
AR			:= ar rcs
RM			:= rm -f

CFLAGS		:= -Wall -Wextra -Werror

INCDIR= -I./

SRCS		:= ft_strlen.c \
                ft_strlcpy.c \
                ft_strlcat.c \
                ft_strchr.c \
                ft_strrchr.c \
                ft_strnstr.c \
                ft_strncmp.c \
                ft_memset.c \
                ft_bzero.c \
                ft_memcpy.c \
                ft_memchr.c \
                ft_memmove.c \
                ft_memcmp.c \
                ft_atoi.c \
                ft_isalpha.c \
                ft_isdigit.c \
                ft_isalnum.c \
                ft_isascii.c \
                ft_isprint.c \
                ft_toupper.c \
                ft_tolower.c \
                ft_calloc.c \
                ft_strdup.c \
                ft_substr.c \
                ft_strjoin.c \
                ft_strtrim.c \
                ft_split.c \
                ft_itoa.c \
                ft_strmapi.c \
                ft_striteri.c \
                ft_putchar_fd.c \
                ft_putstr_fd.c \
                ft_putendl_fd.c \
                ft_putnbr_fd.c \

BONUS       := ft_lstnew_bonus.c \
                ft_lstadd_front_bonus.c \
                ft_lstsize_bonus.c \
                ft_lstlast_bonus.c \
                ft_lstadd_back_bonus.c \
                ft_lstdelone_bonus.c \
                ft_lstclear_bonus.c \
                ft_lstiter_bonus.c \
                ft_lstmap_bonus.c

OBJS		:= $(SRCS:.c=.o)
OBJS_BONUS  := $(BONUS:.c=.o)

ifeq ($(filter bonus, $(MAKECMDGOALS)), bonus)
	OBJS += $(OBJS_BONUS)
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCDIR) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
