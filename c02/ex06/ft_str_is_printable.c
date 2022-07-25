/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 09:14:57 by fhassoun          #+#    #+#             */
/*   Updated: 2022/06/30 09:22:52 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{	
	int	i;
	int	res;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] > 31 && str[i] < 127)
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

	n = ft_str_is_printable(arr);
	printf("%i", n);
	return (0);
}*/
