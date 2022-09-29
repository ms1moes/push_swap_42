/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:35:32 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/28 22:35:32 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	split_parse(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (((s[i] < '0' || s[i] > '9') && s[i] != ' ')
			&& (s[i] != '-' && s[i] != '+'))
			return (1);
		if (s[i] == '-' || s[i] == '+')
			if ((s[i + 1] < '0' || s[i + 1] > '9'))
				return (1);
		i++;
	}
	return (0);
}
