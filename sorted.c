/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:51:23 by msimoes-          #+#    #+#             */
/*   Updated: 2022/06/23 15:51:23 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_a(t_list *a)
{
	while (a->next)
	{
		if (a->info > a->next->info)
			return (0);
		a = a->next;
	}
	return (1);
}

int	is_sorted(t_list *a, t_list *b)
{
	if ((!a && !b) || (check_a(a) && !b))
		return (1);
	return (0);
}
