#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_is_negative(int n)
{
    char    result;

    if (n < 0)
        result = 'N';
    else
        result = 'P';
    ft_putchar(result);
}

int main()
{
    ft_is_negative(12);
    ft_putchar('\n');


    ft_is_negative(0);
    ft_putchar('\n');


    ft_is_negative(-3);
    ft_putchar('\n');

}