/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:55:43 by pmorello          #+#    #+#             */
/*   Updated: 2024/01/02 13:59:39 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
		if ( n >= 0)
		{
			ft_putchar('P');
		}
		else 
		{
			ft_putchar('N');
		}
}

int	main()
{
	int	i = 1;
	ft_is_negative(i);
}
