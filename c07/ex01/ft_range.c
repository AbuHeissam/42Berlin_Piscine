/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:25:23 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/07 16:41:05 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <limits.h>
#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*dest;
	long	i;
	long	j;
	long	size;

	i = 0;
	j = min;
	if (min >= max)
		return (NULL);
	size = ((long)max - (long)min);
	dest = (int *)malloc(sizeof (*dest) * (size +1));
	while (i < size)
	{
		dest[i] = j;
		i++;
		j++;
	}
	dest[size] = '\0';
	return (dest);
}

/*int	main(void)
{
	int	min;
	int	max;

	//min = -2147483648;
	min = -25000;
	printf("min : %i\n", min);
	//max = 2147483647;
	max = 25000;
	printf("max : %i\n", max);
	ft_range(min, max);
	return (0);
}*/
