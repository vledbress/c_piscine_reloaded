/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:01:20 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:01:46 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result;

    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    result = 1;
    while (nb > 1)
        result *= nb--;
    return result;
}


int main()
{
    printf("%d\n", ft_iterative_factorial(4));
}