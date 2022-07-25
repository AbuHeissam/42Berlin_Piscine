/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:37:09 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/12 11:38:20 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stddef.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*strc;

	strc = malloc(sizeof(t_stock_str) * (ac + 1));
	if (strc == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		strc[i].size = ft_strlen(av[i]);
		strc[i].str = av[i];
		strc[i].copy = ft_strdup(av[i]);
		i++;
	}
	strc[i].str = '\0';
	return (strc);
}

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
