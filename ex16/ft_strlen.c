#include <stdio.h>

int ft_strlen(char *str)
{
    int size;

    size = 0;
    while (str[size])
        size++;
    return (size);
}


int main()
{
    printf("%d\n", ft_strlen("pizda"));
}