/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 19:17:37 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/03 18:54:16 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_worker(int *com, int game[4][4]);
void	ft_filler(int *com, int game[4][4]);
int		ft_zero_counter(int game[4][4]);

int	main(int argc, char *argv[])
{	
	int	i;
	int	j;
	int	puzzle[17];
	int	field[4][4];
	int	count;

	if (argc != 2)
	{
		write(1, "Only one argument allowed\n", 25);
		return (1);
	}
	i = 0;
	j = 0;
	/* parse argument and convert to int */
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == ' ')
		{
			i++;
		}
		puzzle[j] = (int)argv[1][i] - 48;
		i++;
		j++;
	}
	puzzle[17] = '\0';

	/* initilize 2d-array with 0  */
	i = 0;
	while( i < 4 )
	{
		j = 0;
		while (j < 4)
		{
			field[i][j] = 0;
			j++;
		}
		i++;
	}
	ft_worker(puzzle, field);
	ft_filler(puzzle, field);
	i = 0;
	while( i < 4 )
	{
			j = 0;
			while (j < 4)
			{
				printf("%i ",field[i][j]);
				j++;
			}
			i++;
			printf("\n");
	}

	printf("\n");


	count = ft_zero_counter(field);
	printf("remaining fileds: %i\n", count);
	return (0);
}
