#include <unistd.h>
#include <stdio.h>

int  ft_recursive_power(int nb, int power);

int main(void)
{
    printf("%d\n", ft_recursive_power(2, 2)); // 4
    printf("%d\n", ft_recursive_power(2, 1)); //2
    printf("%d\n", ft_recursive_power(2, 0)); // 1
    printf("%d\n", ft_recursive_power(2, -3)); // 0
    printf("%d\n", ft_recursive_power(2, 4)); // 16
    printf("%d\n", ft_recursive_power(5, 3)); // 125
    printf("%d\n", ft_recursive_power(3, 5)); // 243
    printf("%d\n", ft_recursive_power(2, 1000000)); // -1
  return 0;
}
