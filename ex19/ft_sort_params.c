/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 00:28:14 by fdubois           #+#    #+#             */
/*   Updated: 2018/11/04 18:06:39 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;	
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putendl(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		ft_putchar(s[i++]);
	ft_putchar('\n');
}


int	main(int ac, char **av)
{
	if (ac > 1)
	{
		int i;

		i = 1;
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				av[0] = av[i];
				av[i] = av[i + 1];
				av[i + 1] = av[0];
				i = 0;
			}
			i++;
		}
		i = 0;
		while (++i < ac)
			ft_putendl(av[i]);
	}
	return (0);
}
