/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:36:14 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/17 21:45:01 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(char *str)
{
	int	i;
	int	result;
	int	count;

	i = 0;
	result = 0;
	count = 0;
	while (str[i] == '-' || str[i] == '+' || (str[i] >= 0 && str[i] <= 32))
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (count % 2 != 0)
		res = -res;
	return (0);
}
