/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:11:06 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/04 14:27:44 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -sign;
		}
		if (str[i] >= 48 && str[i] <= 57)
		{
			res = (res * 10) + (str[i] - 48);
		}
		if ((str[i] >= 48 && str[i] <= 57)
			&& !(str[i + 1] >= 48 && str[i + 1] <= 57))
			str[i + 1] = '\0';
		i++;
	}
	return (res * sign);
}

/*int	main(void)
{	
	int	res;
	char 	str[] = " ---+--+1234ab567";

	res =  ft_atoi(str);
	printf("%d\n", res);
	return (0);
}*/
