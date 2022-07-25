/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:21:49 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/13 16:43:43 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_strlen(char *str);

char **ft_split(char *str, char *charset)
{
	int i;
	int j;
	int k;
	int size;
	char **res;
	i = 0;
	j = 0;
	res = malloc(sizeof(char) * 100 );
	while (i < 100)
	{
		res[i] = malloc(sizeof(char) * 100 );
		while (j<100)
		{	
			res[i][j] = '\0';
			j++;
		}
		i++;
	}
	size = ft_strlen(charset);
	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i],charset, size) == 0)
			{
				res[j][k] = '\0';
				i = i + (size);
				j++;
				k = 0;
			}
		if (j<0)
			j = 0;
		res[j][k] = str[i];
		k++;
		i++;	
	}
	res[j+1][0] = '\0';
	return (res);
}


int	main(void)
{
	char **res;
	int i;
	//char str[100] = "1*22*333*4444*55555*666666";
	char str[100] = "1abc22abc333abc4444abc55555abc666666";
	char charset[4] = "abc";

	i = 0;
	res = ft_split(str, charset);
	while (*res[i] != '\0')
	{
		ft_putstr(res[i]);
		ft_putstr("\n");
		i++;
	}
	free(*res);
	return (0);
}

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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
