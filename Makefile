# ライブラリ名
NAME := libft.a

# コマンド
CC := cc
AR := ar rcs
RM := rm -f

# フラグ
CFLAGS := -Wall -Wextra -Werror

# ディレクトリ
INC_DIR		:= includes
SRC_DIR		:= srcs
BONUS_DIR	:= bonus
OBJ_DIR		:= obj

# インクルードパスの指定
CFLAGS += -I $(INC_DIR)

# ソースファイル (ディレクトリ名は含めない)
SOURCES := ft_isalpha.c ft_isdigit.c ft_isalnum.c \
           ft_isascii.c ft_isprint.c ft_strlen.c \
           ft_toupper.c ft_tolower.c ft_memset.c \
           ft_bzero.c ft_memcpy.c ft_memmove.c \
           ft_strncmp.c ft_memcmp.c ft_strchr.c \
           ft_strrchr.c ft_strlcpy.c ft_strlcat.c \
           ft_strnstr.c ft_atoi.c ft_calloc.c \
           ft_strdup.c ft_substr.c ft_memchr.c \
           ft_itoa.c ft_strjoin.c ft_strtrim.c \
           ft_split.c ft_strmapi.c ft_striteri.c \
           ft_putchar_fd.c ft_putstr_fd.c \
           ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SOURCES := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
                 ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
                 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# パスを付与してオブジェクトファイルのリストを生成
OBJECTS := $(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))
BONUS_OBJECTS := $(addprefix $(OBJ_DIR)/, $(BONUS_SOURCES:.c=.o))

# .PHONY: 偽のターゲットを指定
.PHONY: all clean fclean re bonus

# デフォルトルール
all: $(NAME)

# ライブラリ生成ルール
$(NAME): $(OBJECTS)
	$(AR) $@ $^

# Bonusルール
bonus: $(OBJECTS) $(BONUS_OBJECTS)
	$(AR) $(NAME) $^

# オブジェクトファイル生成ルール
# $(OBJ_DIR)/%.o は obj/ft_isalpha.o のようなターゲットにマッチ
# $(SRC_DIR)/%.c は srcs/ft_isalpha.c のようなソースにマッチ
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR) # objディレクトリがなければ作成する
	$(CC) $(CFLAGS) -c $< -o $@

# Bonus用オブジェクトファイル生成ルール
$(OBJ_DIR)/%.o: $(BONUS_DIR)/%.c
	@mkdir -p $(OBJ_DIR) # objディレクトリがなければ作成する
	$(CC) $(CFLAGS) -c $< -o $@

# クリーンルール
clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all