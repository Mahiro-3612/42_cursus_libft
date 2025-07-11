NAME		:= libft.a

CC			:= cc
AR			:= ar rcs
RM			:= rm -f

CFLAGS		:= -Wall -Wextra -Werror

SRCS		:= src/ft_strlen.c \
                src/ft_strlcpy.c \
                src/ft_strlcat.c \
                src/ft_strchr.c \
                src/ft_strrchr.c \
                src/ft_strnstr.c \
                src/ft_strncmp.c \
                src/ft_memset.c \
                src/ft_bzero.c \
                src/ft_memcpy.c \
                src/ft_memchr.c \
                src/ft_memmove.c \
                src/ft_memcmp.c \
                src/ft_atoi.c \
                src/ft_isalpha.c \
                src/ft_isdigit.c \
                src/ft_isalnum.c \
                src/ft_isascii.c \
                src/ft_isprint.c \
                src/ft_toupper.c \
                src/ft_tolower.c \
                src/ft_calloc.c \
                src/ft_strdup.c 

OBJS		:= $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re