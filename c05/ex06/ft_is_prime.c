/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:11:35 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/06 11:22:33 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;
	int	ip;

	i = 1;
	ip = 0;
	if (nb == 1 || nb == 0)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			ip++;
		i++;
	}
	if (ip > 2)
		return (0);
	return (1);
}

/*int	main(void)
{
	int	nb;
	int	res;

	nb = 0;
	res = ft_is_prime(nb);
	printf("%i\n", res);
	return (0);
}*/
