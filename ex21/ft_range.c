#include <stdio.h>
#include <stdlib.h>


//Min included - max excluded.

//0 - 10 -> [0, 9]


int *ft_range(int min, int max)
{
    int *res;
    int index;
    int len;

    if (min >= max)
        return (NULL);
    len = max - min;
    res = (int *)malloc(sizeof(int) * len);
    if (!res)
        return (NULL);
    index = 0;
    while (index < len)
    {
        res[index] = min + index;
        index++;
    }
    return (res);
}

int main()
{
    int min = -9;
    int max = 8;
    int len = max - min;

    int *res = ft_range(min, max);
    for(int i = 0; i < len; ++i)
    {
        printf("%d ", res[i]);
    }

    free(res);
}