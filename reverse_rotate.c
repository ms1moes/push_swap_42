/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 02:50:44 by msimoes-          #+#    #+#             */
/*   Updated: 2022/07/01 02:50:44 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
rra = bottom number goes to top of stack A
rrb = bottom number goes to top of stack B
rrr = rra + rrb
*/

void	rotate_inv_a(t_list **a)
{
	t_list	*tmp2;
	t_list	*tmp;

	tmp = ft_lstlast((*a));
	tmp2 = (*a);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	ft_lstadd_front(a, tmp);
	tmp2->next = NULL;
	write(1, "rra\n", 4);;
}

void	rotate_inv_b(t_list **b)
{
	t_list	*tmp2;
	t_list	*tmp;

	tmp = ft_lstlast((*b));
	tmp2 = (*b);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	ft_lstadd_front(b, tmp);
	tmp2->next = NULL;
	write(1, "rrb\n", 4);;
}

void	rotate_inv_all(t_list **a, t_list **b)
{
	t_list	*tmp2;
	t_list	*tmp;

	tmp = ft_lstlast((*a));
	tmp2 = (*a);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	ft_lstadd_front(a, tmp);
	tmp2->next = NULL;
	tmp = ft_lstlast((*b));
	tmp2 = (*b);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	ft_lstadd_front(b, tmp);
	tmp2->next = NULL;
	write(1, "rrr\n", 4);;
}