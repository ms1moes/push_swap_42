/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:38:09 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/27 09:38:09 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_words(char const *s, char c)
{
    int		i;
    int		count;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != c && s[i] != '\0')
            count++;
        while (s[i] != c && s[i] != '\0')
            i++;
    }
    return (count);
}

static int	ft_word_len(char const *s, char c)
{
    int		i;

    i = 0;
    while (s[i] != c && s[i] != '\0')
        i++;
    return (i);
}

static char	**ft_free(char **str, int i)
{
    while (i >= 0)
    {
        free(str[i]);
        i--;
    }
    free(str);
    return (NULL);
}

char	**ft_split(char const *s, char c)
{
    char	**str;
    int		i;
    int		j;
    int		k;

    i = 0;
    j = 0;
    if (!s)
        return (NULL);
    str = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
    if (!str)
        return (NULL);
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != c && s[i] != '\0')
        {
            str[j] = malloc(sizeof(char) * (ft_word_len(&s[i], c) + 1));
            if (!str[j])
                return (ft_free(str, j));
            k = 0;
            while (s[i] != c && s[i] != '\0')
                str[j][k++] = s[i++];
            str[j++][k] = '\0';
        }
    }
    str[j] = NULL;
    return (str);
}