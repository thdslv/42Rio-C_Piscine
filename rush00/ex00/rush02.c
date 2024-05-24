/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:40:14 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/03 23:30:38 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	v;

	v = 1;
	while ((v <= y) && (x > 0 && y > 0))
	{
		h = 1;
		while (h <= x)
		{
			if ((h == 1 && v == 1) || (v == 1 && h == x))
				ft_putchar('A');
			else if ((h == 1 && v == y) || (h == x && v == y))
				ft_putchar('C');
			else if ((v > 1 && h > 1) && (h < x && v < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}
