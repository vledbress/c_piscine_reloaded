/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:02:25 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:02:25 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int ft_strlen(char *str)
{
    int size;

    size = 0;
    while (str[size])
        size++;
    return (size);
}

char *ft_strdup(char *src)
{
    char *res;
    int index;

    res = (char *)malloc(ft_strlen(src) + 1);
    if (!res)
        return (NULL);
    index = 0;
    while (src[index])
    {
        res[index] = src[index];
        index++;
    }
    res[index] = 0;
    return (res);
}


int main()
{
    char *str = ft_strdup("ilka loooox");
    str[8] = 'z';

    printf("%s\n", str);


    free(str);
}