/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:09:38 by aprado            #+#    #+#             */
/*   Updated: 2023/09/16 16:47:22 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

void	error(void);
void	dict_error(void);

int	main(int argc, char **argv)
{
	int	fd;
	int	numbers;
	
	if (argc == 1 || argc >= 4)
		return (0);
	else if (argc == 2)
		numbers = atoi(argv[1]);
	else
		numbers = atoi(argv[2]);

	if (numbers < 0)
	{
		error();
		return (0);
	}
	fd = open("numbers.dict", O_RDONLY); 
	return (0);
}
