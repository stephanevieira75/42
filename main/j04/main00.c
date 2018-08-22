#include <unistd.h>
#include <stdio.h>

int   ft_iterative_factorial(int nb);
int   ft_recursive_factorial(int nb);
int   ft_iterative_power(int nb, int power);
int   ft_recursive_power(int nb, int power);
int   ft_fibonacci(int index);
int   ft_sqrt(int nb);
int   ft_is_prime(int nb);
int   ft_find_next_prime(int nb);

int		main(void)
{
/********************************************/
  // EX00 ft_iterative_factorial

	printf("%s\n", "13! = 0");
	printf("%d\n", ft_iterative_factorial(13));
	printf("%s\n", "1! = 1");
	printf("%d\n", ft_iterative_factorial(1));
	printf("%s\n", "5! = 120");
	printf("%d\n", ft_iterative_factorial(5));
	printf("%s\n", "9! = 362880");
	printf("%d", ft_iterative_factorial(9));

/********************************************/
  // EX01 ft_recursive_factorial
/*
  printf("%s\n", "13! = 0");
	printf("%d\n", ft_recursive_factorial(13));
	printf("%s\n", "1! = 1");
	printf("%d\n", ft_recursive_factorial(1));
	printf("%s\n", "5! = 120");
	printf("%d\n", ft_recursive_factorial(5));
	printf("%s\n", "9! = 362880");
	printf("%d", ft_recursive_factorial(9));
*/
/********************************************/
  // EX02 ft_iterative_power
/*
  printf("%s\n", "1 power 0 = 1");
  printf("%d\n", ft_iterative_power(5,13));
  printf("%s\n", "1 power 1 = 1");
  printf("%d\n", ft_iterative_power(1,1));
  printf("%s\n", "5 power 4 = 625");
  printf("%d\n", ft_iterative_power(5,4));
  printf("%s\n", "9 power 1 = 9");
  printf("%d\n", ft_iterative_power(9,1));
*/
/********************************************/
  // EX03 ft_recursive_power
/*
  printf("%s\n", "1 power 0 = 1");
  printf("%d\n", ft_recursive_power(1,0));
  printf("%s\n", "1 power 1 = 1");
  printf("%d\n", ft_recursive_power(1,1));
  printf("%s\n", "5 power 4 = 625");
  printf("%d\n", ft_recursive_power(5,4));
  printf("%s\n", "9 power 1 = 9");
  printf("%d\n", ft_recursive_power(9,1));
*/
/********************************************/
  // EX04 ft_fibonacci
/*
  printf("%s\n", "Negatif return -1");
  printf("%d\n", ft_fibonacci(-2));
  printf("%d\n", ft_fibonacci(-3));
  printf("%s\n", "nul & Positif :");
  printf("%d\n", ft_fibonacci(0));
  printf("%d\n", ft_fibonacci(1));
  printf("%d\n", ft_fibonacci(2));
  printf("%d\n", ft_fibonacci(3));
  printf("%d\n", ft_fibonacci(4));
  printf("%d\n", ft_fibonacci(5));
  printf("%d\n", ft_fibonacci(6));
  printf("%d\n", ft_fibonacci(7));
  printf("%d\n", ft_fibonacci(8));
  printf("%d\n", ft_fibonacci(9));
  printf("%d\n", ft_fibonacci(10));
  printf("%d\n", ft_fibonacci(20));
  printf("%d\n", ft_fibonacci(30));
*/
/********************************************/
  // EX05 ft_sqrt
/*
    printf("%s\n", "9 racine carré = 3");
  	printf("%d\n", ft_sqrt(9));
  	printf("%s\n", "5 racine carré = 0");
  	printf("%d\n", ft_sqrt(5));
  	printf("%s\n", "1 racine carré = 1");
  	printf("%d\n", ft_sqrt(1));
    printf("%s\n", "0 racine carré = 0");
    printf("%d\n", ft_sqrt(0));
*/
/********************************************/
  // EX06 ft_is_prime
/*
    printf("%s\n", "9 return 0");
  	printf("%d\n", ft_is_prime(9));
  	printf("%s\n", "7 return 1");
  	printf("%d\n", ft_is_prime(7));
  	printf("%s\n", "-42 return 0");
  	printf("%d\n", ft_is_prime(-42));
    printf("%s\n", "Int return 1");
    printf("%d\n", ft_is_prime(2147483647));
*/
/********************************************/
  // EX07 ft_find_next_prime
/*
    printf("%s\n", "9 return 11");
  	printf("%d\n", ft_find_next_prime(9));
  	printf("%s\n", "7 return 7");
  	printf("%d\n", ft_find_next_prime(7));
  	printf("%s\n", "-42 return 2 car premier nombre premier");
  	printf("%d\n", ft_find_next_prime(-42));
*/
/********************************************/

	return (0);
}
