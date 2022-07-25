/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:21:42 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/05 12:37:46 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	x;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		x = nb;
		while (power > 1)
		{
			nb = x * nb;
			power--;
		}
	}
	return (nb);
}
/*
int	main(void)
{
	int	i;

	i = ft_iterative_power(5, 5);
	printf("%i\n", i);
	return (0);
}
*/
