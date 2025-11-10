/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:59:21 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:00:31 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_number(void)
{
    char    digit;

    digit = '0';
    while (digit <= '9')
        ft_putchar(digit++);
}

int main()
{
    ft_print_number();
}