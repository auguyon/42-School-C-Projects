/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:34:13 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/12 23:32:58 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int m;

	i = 0;
	m = 0;
	if (!(str[0] == ' ' || str[0] == '\t' || str[0] == '\n'))
		m = 1;
	while (str[i] != '\0')
	{
		if ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
				&& str[i] != '\0')
		{
			if (!(str[i + 1] == '\n' || str[i + 1] == '\t' ||
					str[i + 1] == ' ' || str[i + 1] == '\0'))
			{
				m++;
				i++;
			}
		}
		i++;
	}
	return (m);
}

char	*mod_strdup(char *str, int *i)
{
	int		a;
	int		b;
	char	*dest;

	a = 0;
	b = 0;
	while ((str[*i] == '\n' || str[*i] == '\t' || str[*i] == ' ')
		&& str[*i] != '\0')
		(*i)++;
	while (!(str[*i] == '\n' || str[*i] == '\t' || str[*i] == ' ')
		&& str[*i] != '\0')
	{
		(*i)++;
		a++;
	}
	if (!(dest = (char*)malloc(sizeof(*dest) * (a + 1))))
		return (NULL);
	a = (*i - a);
	while (a < *i)
		dest[b++] = str[a++];
	dest[b] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		a;
	int		b;
	int		m;
	char	**tab;

	a = 0;
	b = 0;
	m = ft_count_words(str);
	if (!(tab = (char **)malloc(sizeof(char *) * (m + 1))))
		return (NULL);
	while (a < m)
		tab[a++] = mod_strdup(str, &b);
	tab[a] = 0;
	return (tab);
}
