/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:02:10 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:02:10 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int size;

    size = 0;
    while (str[size])
        size++;
    return (size);
}


int main()
{
    printf("%d\n", ft_strlen("pizda"));
}