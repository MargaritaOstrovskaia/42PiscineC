NAME = do-op
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_atoi.c main.c
OBJECTS = ft_putchar.o ft_putstr.o ft_putnbr.o ft_atoi.o main.o

all: $(NAME)
	
$(NAME):
	@gcc $(SRCS) -o $(NAME) $(CFLAGS)

clean:
	@rm -f $(NAME)

.PHONY: clean