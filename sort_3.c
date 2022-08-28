/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 06:30:31 by msimoes-          #+#    #+#             */
/*   Updated: 2022/07/09 06:30:31 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3(t_list **a)
{
	int	max;

	max = INT_MIN;
	find_max(*a, &max);
	while (!is_sorted(*a, NULL))
	{
		if ((*a)->info == max)
			rotate_a(a);
		else
			swap_a(a);
	}
}
