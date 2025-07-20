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
                src/ft_strdup.c \
                src/ft_substr.c \
                src/ft_strjoin.c \
                src/ft_strtrim.c \
                src/ft_split.c \
                src/ft_itoa.c \
                src/ft_strmapi.c \
                src/ft_striteri.c \
                src/ft_putchar_fd.c \
                src/ft_putstr_fd.c \
                src/ft_putendl_fd.c \
                src/ft_putnbr_fd.c \

BONUS       := bonus/ft_lstnew.c \
                bonus/ft_lstadd_front.c \
                bonus/ft_lstsize.c \
                bonus/ft_lstlast.c \
                bonus/ft_lstadd_back.c \
                bonus/ft_lstdelone.c \
                bonus/ft_lstclear.c \
                bonus/ft_lstiter.c \
                bonus/ft_lstmap.c

OBJS		:= $(SRCS:.c=.o)
OBJS_BONUS  := $(BONUS:.c=.o)

ifeq ($(MAKECMDGOALS), bonus)
	OBJS += $(OBJ_BONUS)
endif

all: $(NAME)

bonus: all

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
