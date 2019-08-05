#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
  printf("%d\n", ft_is_prime(4)); // 0
  printf("%d\n", ft_is_prime(2)); // 1
  printf("%d\n", ft_is_prime(1)); // 0
  printf("%d\n", ft_is_prime(0)); // 0
  printf("%d\n", ft_is_prime(7)); // 1
  printf("%d\n", ft_is_prime(23)); // 1
  printf("%d\n", ft_is_prime(-5)); // 0
  printf("%d\n", ft_is_prime(61)); // 1
  return 0;
}