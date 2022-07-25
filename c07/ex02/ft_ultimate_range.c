/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:08:23 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/10 16:28:21 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>
#include <unistd.h>*/

int	ft_ultimate_range(int **range, int min, int max)
{
	long	i;
	int		j;
	long	size;

	i = 0;
	j = min;
	if (min >= max)
		return (0);
	size = ((long)max - (long)min);
	*range = (int *)malloc(sizeof (**range) * (size));
	while (i < size)
	{
		(*range)[i] = j;
		i++;
		j++;
	}
	return ((int)size);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;
	//min = -2147483648;
	min = 0;
	printf("min : %i\n", min);
	//max = 2147483647;
	max = 166;
	printf("max : %i\n", max);
	int f = ft_ultimate_range(&range, min, max);
	printf("size: %i\n", f);
	i = 0;
	while( i < f)
	{
	printf(" value[%i]\n" ,range[i]);
	i++;
	}
	return (0);
}*/
