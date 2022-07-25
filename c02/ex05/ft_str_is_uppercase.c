/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:57:24 by fhassoun          #+#    #+#             */
/*   Updated: 2022/06/30 09:04:17 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{	
	int	i;
	int	res;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] > 64 && str[i] < 91)
		{
			res = 1;
			i++;
		}
		else
		{
			res = 0;
			return (res);
		}
	}
	if (i == 0)
		return (1);
	return (res);
}

/*int	main(void)
{	
	int	n;
	char	arr[] = "A Z";

	n = ft_str_is_uppercase(arr);
	printf("%i", n);
	return (0);
}*/
