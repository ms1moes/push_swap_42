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

static int  check_A_sort(t_list *a)
{
    while (a->next)
	    {
		    if (a->info > a->next->info)
			    return (0);
		    a = a->next;
	    }
	    return (1);
}

int	A_is_sorted(t_list *a, t_list *b)
{
	if (check_A_sort(a) && !b)
		return (1);
	return (0);
}


