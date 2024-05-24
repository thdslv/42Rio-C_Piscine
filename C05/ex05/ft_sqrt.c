/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:09:26 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/19 21:23:35 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	n;

	n = 0;
	if (nb <= 0)
		return (0);
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%i", ft_sqrt(0));
}
