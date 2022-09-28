/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <msimoes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:01:00 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/28 16:54:33 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_min(t_list *a, int *n)
{
	while (a)
	{
		if (*n > a->index)
			*n = a->index;
		a = a->next;
	}
}

void	find_max(t_list *a, int *n)
{
	while (a)
	{
		if (*n < a->index)
			*n = a->index;
		a = a->next;
	}
}

void	find_min_max(t_list *a, int *max, int *min)
{
	find_max(a, min);
	find_min(a, max);
}

int	find_max_bits(t_list *a)
{
	int	max;
	int	bits;

	bits = 0;
	max = INT_MIN;
	find_max(a, &max);
	while (max && ++bits)
		max >>= 1;
	return (bits);
}
