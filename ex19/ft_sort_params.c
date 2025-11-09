#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
    ft_putchar('\n');
}

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return ((unsigned char)*s1 - (unsigned char)*s2);
}

void ft_swap(char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_params(int len, char **params)
{
    int i;
    int j;

    i = 1;
    while (i < len)
    {
        j = 1;
        while (j < len - i)
        {
            if (ft_strcmp(params[j], params[j + 1]) > 0)
                ft_swap(&params[j], &params[j + 1]);
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    int index;

    if (argc > 1)
    {
        ft_sort_params(argc, argv);
        index = 1;
        while (index < argc)
            ft_putstr(argv[index++]);
    }
}