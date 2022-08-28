/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 06:12:38 by msimoes-          #+#    #+#             */
/*   Updated: 2022/07/09 06:12:38 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_index(t_list **a)
{
	t_list	*tmp;
	int		min;
	int		i;

	i = 0;
	while (++i <= ft_lstsize(*a))
	{
		tmp = *a;
		min = INT_MAX;
		while (tmp)
		{
			if (min > tmp->info && tmp->index == 0)
				min = tmp->info;
			tmp = tmp->next;
		}
		tmp = *a;
		while (tmp && tmp->info != min)
			tmp = tmp->next;
		tmp->index = i;
	}
}