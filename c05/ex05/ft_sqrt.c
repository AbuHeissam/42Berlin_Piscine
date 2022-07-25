/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:00:49 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/05 17:35:51 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	i = 0;
	sqrt = 1;
	while (1)
	{
		i++;
		sqrt = (nb / sqrt + sqrt) / 2;
		if (i == nb + 1)
			break ;
	}
	return (sqrt);
}

int	main(void)
{
	int	i;

	i = ft_sqrt(2147483646);
	printf("%i\n", i);
	return (0);
}
