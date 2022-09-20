/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:51:34 by msimoes-          #+#    #+#             */
/*   Updated: 2022/06/23 15:51:34 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct node
{
 int            info;
 int            index;
 struct node*   next;
    
}   t_list;

void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstadd_front(t_list **lst, t_list *new);
t_list  *ft_lstlast(t_list *lst);
void    sort_2(t_list **a);
void	swap_a(t_list **a);
int parsing(char **av, t_list **a);


#endif