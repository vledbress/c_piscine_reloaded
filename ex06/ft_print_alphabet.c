/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vborysov <vborysov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:59:10 by vborysov          #+#    #+#             */
/*   Updated: 2025/11/10 15:46:23 by vborysov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
		ft_putchar(letter++);
}

// int main()
// {
//     ft_print_alphabet();
// }