# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files (ONLY .c files)
SRC = ft_printf.c \
		format_displayers/display_character.c \
		format_displayers/display_integer.c \
		format_displayers/display_string.c \
		format_displayers/display_unsigned_integer.c \
		format_displayers/display_hexadecimal.c \
		format_displayers/display_pointer.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a  # It's better to use lib as a prefix for the library

# Targets
all: $(NAME)

$(NAME): $(OBJ)
		@ar rcs $(NAME) $(OBJ)
		@ranlib $(NAME) # Don't forget ranlib!
		@echo "Library created: $(NAME)"

%.o: %.c ft_printf.h \  # List all header dependencies here
			format_displayers/display_character.h \
			format_displayers/display_integer.h \
			format_displayers/display_string.h \
			format_displayers/display_unsigned_integer.h \
			format_displayers/display_hexadecimal.h \
			format_displayers/display_pointer.h
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@rm -f $(OBJ)
		@echo "Object files cleaned."

fclean: clean
		@rm -f $(NAME)
		@echo "Library removed: $(NAME)"

re: fclean all

.PHONY: all clean fclean re  # Good practice
