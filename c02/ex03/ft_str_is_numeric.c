/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 09:07:44 by fhassoun          #+#    #+#             */
/*   Updated: 2022/06/30 09:12:01 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{	
	int	i;
	int	res;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] > 47 && str[i] < 58)
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
	char	arr[] = "927836498a6";

	n = ft_str_is_numeric(arr);
	printf("%i", n);
	return (0);
}*/
