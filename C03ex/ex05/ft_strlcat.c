/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:32:07 by thda-sil          #+#    #+#             */
/*   Updated: 2024/05/24 12:00:47 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		if (j < size - 1)
		{
			dest[j] = src[i];
		}
		j++;
		i++;
	}
	dest[j - 1] = '\0';
	return (j);
}

/*#include <stdio.h>

int	main(void)
{
	char dest1[10] = "Tes";
	char src1[] = "te";

	printf("Meu retorno: %ld\n", ft_strlcat(dest1, src1, 5));
	printf("Minha dest: %s\n\n", dest1);

	char dest2[10] = "Tes";
	char src2[] = "te";

	printf("Retorno original: %ld\n", strlcat(dest2, src2, 5));
	printf("Dest original: %s\n\n", dest2);

	return (0);
}*/
