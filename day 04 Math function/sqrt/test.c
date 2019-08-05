#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
  printf("ft_sqrt(4) = 2 -> %d\n", ft_sqrt(4)); // 2
  printf("ft_sqrt(1) = 1 -> %d\n", ft_sqrt(1)); // 1
  printf("ft_sqrt(0) = 0 ->%d\n", ft_sqrt(0)); // 0
  printf("ft_sqrt(3) = 0 ->%d\n", ft_sqrt(3)); // 0
  printf("ft_sqrt(9) = 3 ->%d\n", ft_sqrt(9)); // 3
  printf("ft_sqrt(16) = 4 ->%d\n", ft_sqrt(16)); // 4
  printf("ft_sqrt(-5) = 0 ->%d\n", ft_sqrt(-5)); // 0
  printf("ft_sqrt() = 46340 ->%d\n", ft_sqrt(46340*46340)); // 12
  return 0;
}