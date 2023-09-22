LIB=libft
SRC_PATH=srcs
INC_PATH=includes
CC=gcc
CFLAGS=-Wall -Wextra -Werror

SRCS= $(wildcard $(SRC_PATH)/*.c)
OBJS= $(patsubst $(SRC_PATH)/%.c, $(SRC_PATH)/%.o, $(SRCS))

NAME = $(LIB).a

all: $(NAME)

$(NAME): $(OBJS)
	@$(RM) $(NAME)
	@ar -cvrs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -I $(INC_PATH) -c $< -o $@

clean: 
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re