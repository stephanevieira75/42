#include <unistd.h>
#include <stdio.h>


void    ft_putstr(char *str);
void    ft_putnbr(int nb);
int     ft_atoi(char *str);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
char    *ft_strstr(char *str, char *to_find);
int     ft_strcmp(char *s1, char *s2);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strupcase(char *str);
char    *ft_strlowcase(char *str);
char    *ft_strcapitalize(char *str);
int     ft_str_is_alpha(char *str);
int     ft_str_is_numeric(char *str);
int     ft_str_is_lowercase(char *str);
int     ft_str_is_uppercase(char *str);
int     ft_str_is_printable(char *str);

void ft_putchar(char c)
{
  write(1, &c, 1);
}


int main(int argc, char **argv) {

  (void)argc;
/********************************************/
    // EX00 ft_putstr
/*
  	char str[] = "hello";
    ft_putstr(str);
*/
/********************************************/
    // EX01 ft_putstr
/*

    ft_putnbr(42);
    printf("%s\n", "");
    ft_putnbr(-42);
*/
/********************************************/
    // EX02 ft_atoi
/*
  printf("%s\n", "-1 return 3");
  printf("%d\n", ft_atoi("+"));
  printf("%s\n",  "2462564 return 2");
	printf("%d\n", ft_atoi("2462564"));
  printf("%s\n", "  732 525 return 7");
	printf("%d\n", ft_atoi("  732 525"));
  printf("%s\n", "gjfgdb51HBF Return 0");
	printf("%d\n", ft_atoi("gjfgdb51HBF"));
  printf("%s\n", "''/n' 2	3 afiche 2 car tab");
	printf("%d\n", ft_atoi("\n 2	3"));
  printf("%s\n", "34+4 return 3" );
	printf("%d\n", ft_atoi("34+4"));
  printf("%s\n", "2-424 return 2");
	printf("%d\n", ft_atoi("2-424"));
*/
/********************************************/
    // EX03 ft_strcpy
/*
    char dest[] = "Hello";
    char src[] = "hi";
    printf("%s\n", ft_strcpy(dest, src));
*/
/********************************************/
    // EX04 ft_strncpy
  /*
    unsigned int n = 5;
    char src[] = "Hi";
    char dest[] = "Salut";
    ft_strncpy(dest, src, n);
    printf("%s\n", "dest[] = Salut");
    printf("%s\n", ft_strncpy(dest, src, n));
*/

/********************************************/
    // EX05 ft_strstr
  /*
    printf("%s\n", ft_strstr(argv[1], argv[2]));
*/
/********************************************/
//     EX06 ft_strcmp
/*
    printf("%d\n", ft_strcmp(argv[1], argv[2]));
*/
/********************************************/
    // EX07 ft_strncmp
  /*
    unsigned int j = 1;
    printf("%d\n", ft_strncmp(argv[1], argv[2], j));
*/
/********************************************/
    // EX08 ft_strupcase
  /*
    printf("%s\n", ft_strupcase(argv[1]));
*/
/********************************************/
    // EX09 ft_strlowcase
/*
    printf("%s\n", ft_strlowcase(argv[1]));
*/
/********************************************/
    // EX10 ft_strcapitalize
/*
  printf("%s\n", ft_strcapitalize(argv[1]));
*/
/********************************************/
  // EX11 ft_strcapitalize
/*
  printf("%d\n", ft_str_is_numeric(argv[1]));
*/
/********************************************/
// EX12 ft_str_is_numeric
/*
printf("%d\n", ft_str_is_numeric(argv[1]));
*/
/********************************************/
// EX13 ft_str_is_lowercase
/*
printf("%d\n", ft_str_is_lowercase(argv[1]));
*/
/********************************************/
// EX14 ft_str_is_uppercase
/*
printf("%d\n", ft_str_is_uppercase(argv[1]));
*/
/********************************************/
// EX15 ft_str_is_uppercase

printf("%d\n", ft_str_is_printable(argv[1]));

/********************************************/
  return 0;
}
