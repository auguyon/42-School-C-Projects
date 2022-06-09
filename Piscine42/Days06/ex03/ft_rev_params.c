/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 14:41:10 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/04 11:22:16 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int i;
	int j;

	i = ac - 1;
	while (i > 0)
	{
		j = 0;
		while (av[i][j])
			ft_putchar(av[i][j++]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
