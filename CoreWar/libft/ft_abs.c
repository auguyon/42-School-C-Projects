/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeaufre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 11:48:02 by rbeaufre          #+#    #+#             */
/*   Updated: 2019/10/03 11:50:54 by rbeaufre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_abs(int a, int b)
{
	if (a < b)
		return (b - a);
	else if (b < a)
		return (a - b);
	else if (b == a)
		return (0);
	else
		return (-1);
}