SRC = ft_printf.c
FORMAT_DISPLAYERS = $(addprefix format_displayers/, display_character.c display_string.c display_integer.c display_unsigned_integer.c display_hexadecimal.c display_pointer.c)
# SRC_PRINTERS = $(addprefix printers/, ft_print_c.c ft_print_s.c ft_print_d.c ft_print_u.c ft_print_p.c ft_print_x.c)

OBJS := $(SRC:%.c=%.o)
FORMAT_DISPLAYERS := $(FORMAT_DISPLAYERS:%.c=%.o)
# OBJS_PRINTERS := $(SRC_PRINTERS:%.c=%.o)

NAME = libftprintf.a
CC = gcc
CCFLAGS = -Werror -Wall -Wextra
INC_DIR = .

%.o: %.c
	$(CC) -I$(INC_DIR) $(CCFLAGS) -o $@ -c $?

all: $(NAME)

$(NAME): $(OBJS) $(FORMAT_DISPLAYERS)
	ar rcs $(NAME) $(OBJS) $(FORMAT_DISPLAYERS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS) $(FORMAT_DISPLAYERS)

fclean: clean
	rm -f $(NAME)

re: fclean all

clear: fclean 
	clear

test: all
	gcc $(CCFLAGS) -I. -L. -lftprintf test.c