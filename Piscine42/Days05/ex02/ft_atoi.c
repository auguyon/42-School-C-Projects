/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 16:35:00 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/03 14:35:27 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int a;
	int r;
	int n;

	a = 0;
	r = 0;
	n = 0;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == ' ')
		a++;
	if (str[a] == '+')
		a++;
	if (str[a] == '-')
	{
		n = 1;
		a++;
	}
	while (str[a] >= 48 && str[a] <= 57)
	{
		r = r * 10 + (str[a] - '0');
		a++;
	}
	return (n == 1 ? -r : r);
}
