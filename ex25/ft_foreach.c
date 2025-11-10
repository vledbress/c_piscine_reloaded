/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:03:05 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:03:09 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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