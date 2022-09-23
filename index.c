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

void set_index(t_list **a)
{
    int i;
    t_list *tmp;
    int max;
    
    max = INT_MIN;
    i = ft_lstsize(*a) + 1;
    while(--i > 0)
    {
        tmp = *a;
        max = INT_MIN;
        while(tmp)
        {
            if(tmp->info > max && tmp->index == 0)
                max = tmp->info;
            tmp = tmp->next;
        }
        tmp = *a;
        while (tmp->info != max)
            tmp = tmp->next;
        tmp->index = i;
    }
}