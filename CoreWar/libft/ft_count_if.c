/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeaufre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:50:24 by rbeaufre          #+#    #+#             */
/*   Updated: 2019/06/10 18:19:29 by rbeaufre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			res++;
		i++;
	}
	return (res);
}