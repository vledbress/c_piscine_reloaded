/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:03:15 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/10 15:03:16 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>
#include <fcntl.h>

void    ft_putchar_fd(int fd, char c)
{
    write(fd, &c, 1);
}

void    ft_putstr_fd(int fd, char *str)
{
    while (*str)
        ft_putchar_fd(fd, *str++);
}

int main(int argc, char **argv)
{
    int fd;
    char buf[4096];
    ssize_t n;

    (void)argv[0];
    if (argc == 1)
        return (ft_putstr_fd(2, "File name missing.\n"), -1);
    if (argc > 2)
        return (ft_putstr_fd(2, "Too many arguments.\n"), -1);
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        return (ft_putstr_fd(2, "Cannot read file.\n"), -1);
    n = read(fd, buf, sizeof(buf));
    while (n > 0)
    {
        write(1, buf, n);
        n = read(fd, buf, sizeof(buf));
    }
    close(fd);
}

