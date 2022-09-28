/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <msimoes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:35:23 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/28 19:00:13 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_a(t_list **a)
{
	t_list	*tmp;

	while (*a)
	{
		tmp = (*a);
		(*a) = (*a)->next;
		free(tmp);
	}
}

void	free_msg(t_list **a, int i)
{
	if (i)
		write(2, "Error\n", 6);
	if (*a)
		free_a(a);
	exit(i);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}
