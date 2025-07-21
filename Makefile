NAME		:= libft.a

CC			:= cc
AR			:= ar rcs
RM			:= rm -f

CFLAGS		:= -Wall -Wextra -Werror

TEST_PROG        := test_program
TEST_PROG_BONUS  := test_bonus_program

TEST_SRCS        := test/test.c
TEST_SRCS_BONUS  := test/test_bonus.c

MAKE_OPTS   := --no-print-directory -s

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

BONUS       := bonus/ft_lstnew_bonus.c \
                bonus/ft_lstadd_front_bonus.c \
                bonus/ft_lstsize_bonus.c \
                bonus/ft_lstlast_bonus.c \
                bonus/ft_lstadd_back_bonus.c \
                bonus/ft_lstdelone_bonus.c \
                bonus/ft_lstclear_bonus.c \
                bonus/ft_lstiter_bonus.c \
                bonus/ft_lstmap_bonus.c

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
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test:
	@$(MAKE) $(MAKE_OPTS) all
	@echo "--- Compiling $(TEST_SRCS) and running tests ---"
	@$(CC) $(CFLAGS) $(TEST_SRCS) -L. -lft -o $(TEST_PROG)
	@./$(TEST_PROG)
	@echo "\n--- Cleaning up test files ---"
	@$(RM) $(TEST_PROG)
	@$(MAKE) $(MAKE_OPTS) fclean

test_bonus:
	@$(MAKE) $(MAKE_OPTS) bonus
	@echo "--- Compiling $(TEST_SRCS_BONUS) and running bonus tests ---"
	@$(CC) $(CFLAGS) $(TEST_SRCS_BONUS) -L. -lft -o $(TEST_PROG_BONUS)
	@./$(TEST_PROG_BONUS)
	@echo "\n--- Cleaning up test files ---"
	@$(RM) $(TEST_PROG_BONUS)
	@$(MAKE) $(MAKE_OPTS) fclean

.PHONY: all clean fclean re bonus test test_bonus
