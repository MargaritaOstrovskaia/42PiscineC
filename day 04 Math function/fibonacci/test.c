#include <unistd.h>
#include <stdio.h>

int  ft_fibonacci(int index);

int main(void)
{
    printf("%d\n", ft_fibonacci(0)); // 0
    printf("%d\n", ft_fibonacci(1)); // 1
    printf("%d\n", ft_fibonacci(2)); // 1
    printf("%d\n", ft_fibonacci(3)); // 2
    printf("%d\n", ft_fibonacci(4)); // 3
    printf("%d\n", ft_fibonacci(5)); // 5
    printf("%d\n", ft_fibonacci(6)); // 8
    printf("%d\n", ft_fibonacci(7)); // 13
    printf("%d\n", ft_fibonacci(8)); // 21
    printf("%d\n", ft_fibonacci(9)); // 34
    printf("%d\n", ft_fibonacci(10)); // 55
    printf("%d\n", ft_fibonacci(11)); // 89

  return 0;
}