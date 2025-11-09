#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_number(void)
{
    char    digit;

    digit = '0';
    while (digit <= '9')
        ft_putchar(digit++);
}

int main()
{
    ft_print_number();
}