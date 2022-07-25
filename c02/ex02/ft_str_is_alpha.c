/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:38:02 by fhassoun          #+#    #+#             */
/*   Updated: 2022/06/29 20:27:12 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{	
	int	i;
	int	res;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
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
	char	arr[] = "lkjbaskdjbflkjasdjfb";

	n = ft_str_is_alpha(arr);
	printf("%i", n);
	return (0);
}*/
