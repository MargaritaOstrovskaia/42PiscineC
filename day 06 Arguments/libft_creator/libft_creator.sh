#!/bin/bash

gcc -c ft_*.c -W -Wall -Werror -Wextra 
ar rc libft.a ft_*.o
ranlib libft.a
rm -f ft_*.o
