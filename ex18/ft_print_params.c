/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:02:15 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:02:15 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

void ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

int main(int argc, char **argv)
{
    int i;

    if (argc > 1)
    {
        i = 1;
        while (i < argc)
        {
            ft_putstr(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
}