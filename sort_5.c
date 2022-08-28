/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:36:42 by msimoes-          #+#    #+#             */
/*   Updated: 2022/08/25 01:36:42 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_list **a, t_list **b)
{
    int	min;

	min = INT_MAX;
    find_min(*a, &min);
	while ((*a)->info != min)
        rotate_a(a);
			push_b(b, a);
    min = INT_MAX;
	find_min(*a, &min);
	while ((*a)->info != min)
        rotate_a(a);
			push_b(b, a);
	sort_3(a);
	push_a(a, b);
	push_a(a, b);
}