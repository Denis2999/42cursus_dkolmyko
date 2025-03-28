# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror
# Source file (ONLY .c file)
SRC = src/pipex.c \
		src/utils.c
# Object file
OBJ = $(SRC:.c=.o)
# Executable name
NAME = pipex
# Library name
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Targets
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "Executable created: $(NAME)"

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)
	@echo "Libft compiled."

clean:
	@rm -f $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "Object files cleaned."

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "Executable and library removed."

re: fclean all

.PHONY: all clean fclean re
