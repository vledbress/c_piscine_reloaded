/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:00:48 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:00:52 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}






int main()
{
    int a = 42;
    int b = 10;

    int div, mod;

    ft_div_mod(a, b, &div, &mod);
    printf("div = %d\n", div);
    printf("mod = %d\n", mod);
}