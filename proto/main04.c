#include <stdio.h>
int     ft_is_prime(int nb);

int     main(void)
 {
    printf("%s\n", "7 return 1");
    printf("%d\n", ft_is_prime(7));
    printf("%s\n", "9 return 0");
    printf("%d\n", ft_is_prime(9));
    printf("%s\n", "-42 return 0");
    printf("%d\n", ft_is_prime(-42));
    printf("%d\n", ft_is_prime(2147483647));
    printf("%s", "Int max sucess if = 1");
    return (0);
}
