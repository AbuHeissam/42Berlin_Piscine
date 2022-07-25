/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:27:46 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/05 11:06:52 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;	

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (s1[i] < s2[i])
		return (-1);
	if (s1[i] > s2[i])
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%i\n", ft_strcmp("ABD", "ABsdjkfC"));
	printf("%i\n\n", strcmp("ABD", "ABsdjkfC"));
	
	printf("%d\n", ft_strcmp("Hello", "Hello1"));
	printf("%d\n\n", strcmp("Hello", "Hello1"));
	
	printf("%d\n", ft_strcmp("Hello", "He"));
	printf("%d\n\n", strcmp("Hello", "He"));
	
	printf("%d\n", ft_strcmp("He", "Hello"));
	printf("%d\n\n", strcmp("He", "Hello"));
	
	printf("%d\n", ft_strcmp("Hello", "Hello"));
	printf("%d\n\n", strcmp("Hello", "Hello"));	
}*/
