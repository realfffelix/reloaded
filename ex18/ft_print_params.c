/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 03:29:31 by fdubois           #+#    #+#             */
/*   Updated: 2018/11/04 18:10:30 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (++i < ac)
	{
		while (av[i][j] != '\0')
			ft_putchar(av[i][j++]);
		j = 0;
		ft_putchar('\n');
	}
	return (0);
}
