/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:02:02 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:02:03 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_sqrt(int nb)
{
    int root;

    if (nb < 0)
        return (0);
    root = 1;
    while (root * root <= nb)
    {
        if (root * root == nb)
            return (root);
        root++;
    }
    return (0);
}

int main()
{
    printf("%d\n", ft_sqrt(-456));
    printf("%d\n", ft_sqrt(0));
    printf("%d\n", ft_sqrt(1));
    printf("%d\n", ft_sqrt(4));
}