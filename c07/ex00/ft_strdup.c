/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:32:54 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/10 16:27:43 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	unsigned int	size;
	char			*dest;
	int				i;

	size = ft_strlen(src);
	dest = (char *)malloc(sizeof (*dest) * (size + 1));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char *dest[100];

	*dest = ft_strdup("xIeyr4lEO5xnT8XKhprwEP6etvp0U");
	ft_putstr(*dest);
	ft_putstr("\n");
	*dest = ft_strdup("7zsFxPTl9nptrumejsFyky3uh7JpBWrYw14VjdwtIWJcD1p");
	ft_putstr(*dest);
	ft_putstr("\n");
	*dest = ft_strdup("dBbIdyix7V6xdJREUYN4mCaEdjtaev");
	ft_putstr(*dest);
	ft_putstr("\n");
	*dest = ft_strdup("b8bP0BFqIBFq30WZcYnkyXnCqtwb1Wl1QatNDSPHi");
	ft_putstr(*dest);
	ft_putstr("\n");
	*dest = ft_strdup("k9OX6Fnp7UA8QBngXliNA6wBTcasXmepNjjnJ8Ahu9y62GXDRT");
	ft_putstr(*dest);
	ft_putstr("\n");
	*dest = ft_strdup("z6V3EaP2pBWLahqW3IfoVRQ4dnBWaLacOs8idzR8EBZk04CO1D");
	ft_putstr(*dest);
	ft_putstr("\n");
	*dest = ft_strdup("aBs");
	ft_putstr(*dest);
	ft_putstr("\n");
	*dest = ft_strdup("M7qclfKOMIRHcjwU62Op33eAAvjMtuAPHFYeYAIv");
	ft_putstr(*dest);

	return (0);
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
