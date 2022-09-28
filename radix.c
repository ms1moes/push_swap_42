/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:19:13 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/22 07:19:13 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list **a, t_list **b)
{
	int		max_bits;
	int		i;
	int		size;
	t_list	*tmp;

	max_bits = find_max_bits(*a);
	i = -1;
	while (++i < max_bits)
	{
		size = ft_lstsize(*a);
		while (size--)
		{
			tmp = *a;
			if ((tmp->index >> i & 1))
				rotate_a(a);
			else
				push_b(a, b);
		}
		while (*b)
			push_a(a, b);
	}
}
