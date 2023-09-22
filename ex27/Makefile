NAME=ft_display_file
CC=gcc
CFLAGS=-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(NAME).o
	@$(CC) $< -o $@

$(NAME).o: $(NAME).c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@(RM) $(NAME).o

fclean: clean
	@(RM) $(NAME)

.PHONY: all clean fclean