# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 12:07:29 by msakurai          #+#    #+#              #
#    Updated: 2025/07/26 12:08:37 by msakurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

CC			:= cc
AR			:= ar rcs
RM			:= rm -f

CFLAGS		:= -Wall -Wextra -Werror

INCDIR= -I./

TEST_PROG        := test_program
TEST_PROG_BONUS  := test_bonus_program

TEST_SRCS        := test.c
TEST_SRCS_BONUS  := test_bonus.c

MAKE_OPTS   := --no-print-directory -s

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

test:
	@$(MAKE) $(MAKE_OPTS) all
	@echo "--- Compiling $(TEST_SRCS) and running tests ---"
	@$(CC) $(CFLAGS) $(INCDIR) $(TEST_SRCS) -L. -lft -o $(TEST_PROG)
	@./$(TEST_PROG)
	@echo "\n--- Cleaning up test files ---"
	@$(RM) $(TEST_PROG)
	@$(MAKE) $(MAKE_OPTS) fclean

test_bonus:
	@$(MAKE) $(MAKE_OPTS) bonus
	@echo "--- Compiling $(TEST_SRCS_BONUS) and running bonus tests ---"
	@$(CC) $(CFLAGS) $(INCDIR) $(TEST_SRCS_BONUS) -L. -lft -o $(TEST_PROG_BONUS)
	@./$(TEST_PROG_BONUS)
	@echo "\n--- Cleaning up test files ---"
	@$(RM) $(TEST_PROG_BONUS)
	@$(MAKE) $(MAKE_OPTS) fclean

.PHONY: all clean fclean re bonus test test_bonus
