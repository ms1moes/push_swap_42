/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 06:18:33 by msimoes-          #+#    #+#             */
/*   Updated: 2022/07/09 06:18:33 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	duplicate_checker(t_list **a)
{
    t_list	*previous;
	t_list	*following;

	previous = (*a);
	while (previous)
	{
		following = previous->next;
		while (following)
		{
			if (previous->info == following->info)
				return (1);
			following = following->next;
		}
		previous = previous->next;
	}
	return (0);
}
