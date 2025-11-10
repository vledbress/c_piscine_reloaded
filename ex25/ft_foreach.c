#include <stdio.h>





void print_num(int n)
{
    printf("%d ", n);
}


void ft_foreach(int *tab, int length, void (*f)(int))
{
    int index;

    index = 0;
    while (index < length)
        f(tab[index++]);
}


int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    ft_foreach(arr, 5, print_num);
}