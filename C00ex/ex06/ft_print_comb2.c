/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:29:44 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/07 15:51:26 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar('0' + x / 10);
			ft_putchar('0' + x % 10);
			ft_putchar(' ');
			ft_putchar('0' + y / 10);
			ft_putchar('0' + y % 10);
			if ((x + y) <= 196)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			y++;
		}
		x++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
