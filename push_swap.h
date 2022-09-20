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

//moves
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_both(t_list **a, t_list **b);

void	rotate_a(t_list **a);
void	rotate_b(t_list **a);
void	rotate_both(t_list **a, t_list **b);

void	revrotate_a(t_list **a);
void	revrotate_b(t_list **a);
void	revrotate_both(t_list **a, t_list **b);

void    push_a(t_list **a, t_list **b);
void    push_b(t_list **a, t_list **b);

//lst_utils
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);

//sorts
void	sort_2(t_list **a);
void    sort_3(t_list **a);
int	    is_sorted(t_list *a, t_list *b);


//outras
int		parsing(char **av, t_list **a);
void	free_msg(t_list **a, int i);
void    find_min_max(t_list *a, int max, int min);
void    find_min(t_list *a, int n);
void    find_max(t_list *a, int n);


#endif