NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS_FOLDER = -I./includes

all: $(NAME)

%.o: srcs/%.c
	gcc $(HEADERS_FOLDER) -c $< -o $@ $(CFLAGS)
	
$(NAME): $(OBJECTS)
	ar -r $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)