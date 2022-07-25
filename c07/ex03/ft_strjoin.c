/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 08:13:44 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/10 16:31:43 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		length_strs;
	int		length_sep;
	int		i;

	i = 0;
	length_strs = 0;
	while (i < size)
	{
		length_strs = length_strs + ft_strlen(strs[i]);
		i++;
	}
	length_sep = ft_strlen(sep);
	dest = (char *)malloc(sizeof (*dest)
			* (length_strs + (length_sep * (size -1)) + 1));
	i = 0;
	while (i < size)
	{	
		dest = ft_strcat(dest, strs[i]);
		if (i < size - 1)
			dest = ft_strcat(dest, sep);
		i++;
	}
	size = ft_strlen(dest);
	dest[size] = '\0';
	return (dest);
}

int	main(void)

{
	char	*arr[8];
	arr[0] = "a";
	arr[1] = "b";
	arr[2] = "c";
	arr[3] = "d";
	arr[4] = "e";
	arr[5] = "f";
	arr[6] = "42";
	arr[7] = "moon";
	printf("%s", ft_strjoin(0, arr, "*"));
	return(0);
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

char	*ft_strcat(char *dest, char *src)
{
	int	length;
	int	i;

	i = 0;
	length = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
