/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testevetor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:28:48 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/11 19:00:46 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	vet[3] = {1, 2, 3};
	int	i = 0;

	while (i <= 2)
	{
		printf("%i", vet[i]);
		if (i < 2)
			printf(", ");
		i++;
	}
	return (0);
}