/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:55:47 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/16 19:02:06 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putchar();

void	putnbr(int nb)
{
	if (nb == 2147483648)
	{
		putchar('-');
		putchar('2');
		putnbr(147483648);
	}
	else if (nb < 0)
	{
		putchar('-');
		nb = -nb;
		putnbr(nb);
	}
	else if (nb > 9)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	else
		putchar(nb + 48);
}

