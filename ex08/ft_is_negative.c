/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:59:25 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:00:31 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_is_negative(int n)
{
    char    result;

    if (n < 0)
        result = 'N';
    else
        result = 'P';
    ft_putchar(result);
}

int main()
{
    ft_is_negative(12);
    ft_putchar('\n');


    ft_is_negative(0);
    ft_putchar('\n');


    ft_is_negative(-3);
    ft_putchar('\n');

}