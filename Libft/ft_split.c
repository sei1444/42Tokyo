/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:48:00 by marvin            #+#    #+#             */
/*   Updated: 2023/06/01 00:29:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *getString(char const *s, int start, int end)
{
    int i;
    char *tmpPtr;

    tmpPtr = malloc(sizeof(char) * (end - start + 1));
    if (tmpPtr == NULL)
        return (NULL);
    i = 0;
    while (start + i < end)
    {
        tmpPtr[i] = s[start + i];
        i++;
    }
    tmpPtr[i] = '\0';
    return (tmpPtr);
}

char **ft_split(char const *s, char c)
{
    int i;
    int count;
    int start;
    char **arrPtr;

    i = 0;
    count = 0;
    arrPtr = malloc(sizeof(char *) * ft_strlen(s));
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        start = i;
        while (s[i] != c)
            i++;
        arrPtr[count] = getString(s, start, i);
        free(arrPtr[count]);
        count++;;
    }
    arrPtr[count] == NULL;
    return (arrPtr);
}
