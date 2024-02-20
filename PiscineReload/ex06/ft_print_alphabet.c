/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:38:36 by pmorello          #+#    #+#             */
/*   Updated: 2024/01/05 11:50:45 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet()
{
	int i;
	i = 'a';
	
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}

/*
int main()
{
	ft_print_alphabet();
}*/
