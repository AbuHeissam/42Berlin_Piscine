/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:33:05 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/05 11:26:27 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%i\n", ft_strncmp("ABD", "ABsdjkfC", 5));
	printf("%i\n\n", strncmp("ABD", "ABsdjkfC",5));
	
	printf("%d\n", ft_strncmp("Hello", "Hello1",5));
	printf("%d\n\n", strncmp("Hello", "Hello1",5));
	
	printf("%d\n", ft_strncmp("Hello", "He",2));
	printf("%d\n\n", strncmp("Hello", "He",2));
	
	printf("%d\n", ft_strncmp("He", "Hello",6));
	printf("%d\n\n", strncmp("He", "Hello",6));
	
	printf("%d\n", ft_strncmp("Hello", "Hello",4));
	printf("%d\n\n", strncmp("Hello", "Hello",4));
}*/
