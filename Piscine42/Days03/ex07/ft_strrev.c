/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:49:21 by auguyon           #+#    #+#             */
/*   Updated: 2018/08/31 15:24:39 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	temp;
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (str[a])
		a++;
	a--;
	while (b <= a / 2)
	{
		temp = str[b];
		str[b] = str[a - b];
		str[a - b] = temp;
		b++;
	}
	return (str);
}