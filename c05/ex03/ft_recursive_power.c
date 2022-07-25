/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:13:50 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/05 16:24:18 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power -1));
}

/*int	main(void)
{
	int	i;

	i = ft_recursive_power(5, 5);
	printf("%i\n", i);
	return (0);
}*/
