/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <msimoes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:35:23 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/20 16:00:39 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void free_a(t_list **a)
{
    t_list *tmp;
    
    while(*a)
    {
        tmp = (*a);
        (*a) = (*a)->next;
        free(tmp);                        
    }           
}

void free_msg(t_list **a, int i)
{
    if (i)
        write(2, "Error\n", 6);
    if (*a)
        free_a(a);
    exit(i);
}
