/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:49:10 by fhassoun          #+#    #+#             */
/*   Updated: 2022/06/30 08:56:22 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{	
	int	i;
	int	res;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] > 96 && str[i] < 123)
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
	char	arr[] = "";

	n = ft_str_is_lowercase(arr);
	printf("%i", n);
	return (0);
}*/
