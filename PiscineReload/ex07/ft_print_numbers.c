/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:44:19 by pmorello          #+#    #+#             */
/*   Updated: 2024/01/02 13:51:05 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i)
{
	write(1, &i, 1);
}

void	ft_print_numbers()
{
	int	j;
	j = 48;

	while (j <= 57)
	{
		ft_putchar(j);
		j++;
	}
}

int	main()
{
	ft_print_numbers();
}
