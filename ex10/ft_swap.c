/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:00:44 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:00:52 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

void ft_swap(int *a, int* b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}



int main()
{
    int a = 12;
    int b = 98;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    ft_swap(&a, &b);
    printf("\n");

    printf("a = %d\n", a);
    printf("b = %d\n", b);

}