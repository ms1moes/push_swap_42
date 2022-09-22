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

void index_list(t_list *a)
{
    int i;
    int min;
    t_list *tmp;

    i = 0;
    min = INT_MAX;
    while(++i < ft_lstsize(a))
    {
        while(a)
        {
             if(a->info < min && a->index == 0)
                min = a->info;   
        a = a->next;
        }
        tmp = a;
        while(tmp)
        {
            if(tmp->info == min)
                tmp->index = i;
            tmp = tmp->next;
        }
        min = INT_MAX;
    }