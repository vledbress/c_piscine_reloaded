/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:01:24 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:01:46 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    return (nb * ft_recursive_factorial(nb - 1));
}



int main()
{
    printf("%d\n", ft_recursive_factorial(-31));
    printf("%d\n", ft_recursive_factorial(0));
    printf("%d\n", ft_recursive_factorial(5));
}