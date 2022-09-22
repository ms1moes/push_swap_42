/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 03:32:12 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/21 03:32:12 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void index_list(t_list **a)
{
    int max;
    int size;
    t_list *tmp;

    size = ft_lstsize(*a);
    max = INT_MIN;
    while (size--)
    {
        tmp = *a;
        max = INT_MIN;
        while (tmp)
        {
            if (tmp->info > max && tmp->index == 0)
            {
                max = tmp->info;
                max = tmp->index = size;
            }
            tmp = tmp->next;
        }
        tmp = *a;
        while (tmp)
        {
            if (tmp->info != max)
                tmp->index = 0;
            tmp = tmp->next;
        }
    }

}
