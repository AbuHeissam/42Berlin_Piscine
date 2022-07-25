/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:49:18 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/04 09:23:25 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[0] > 96 && str[0] < 123)
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] > 96 && str[i] < 123) && (str[i - 1] == ' '))
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] > 96 && str[i] < 123)
			&& ((str[i - 1] > 32 && str[i - 1] < 48)
				|| (str[i - 1] > 57 && str[i - 1] < 65)
				|| (str[i - 1] > 90 && str[i - 1] < 97)
				|| (str[i - 1] > 122 && str[i - 1] < 127)))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(arr);
	printf("%s", arr);
	return (0);
}*/
