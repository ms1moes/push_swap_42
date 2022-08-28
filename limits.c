/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 06:40:34 by msimoes-          #+#    #+#             */
/*   Updated: 2022/07/09 06:40:34 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_limits(t_list *a, int *max, int *min)
{
	while (a)
	{
		if (a->index > *max)
			*max = a->index;
		if (a->index < *min)
			*min = a->index;
		a = a->next;
	}
}

void	find_max(t_list *a, int *max)
{
	while (a)
	{
		if (a->index > *max)
			*max = a->index;
		a = a->next;
	}
}

void	find_min(t_list *a, int *min)
{
	while (a)
	{
		if (a->index < *min)
			*min = a->index;
		a = a->next;
	}
}