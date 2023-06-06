/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:48:00 by marvin            #+#    #+#             */
/*   Updated: 2023/06/06 18:25:24 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int getLength(char const *s, char c)
{
	int i;
	int count;
	int flag;

	i = 0;
	while (s[i] == c)
		i++;
	count = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
			i++;
		count++;
	}
	return (count);
}

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
	int flag;
    int start;
    char **arrPtr;

    arrPtr = malloc(sizeof(char *) * (getLength(s, c) + 1));
	if (arrPtr == 0)
		return (NULL);
    i = 0;
    count = 0;
	flag = 1;
    while (s[i] != '\0')
    {
		while (s[i] == c)
			i++;
        start = i;
        while (s[i] != c)
            i++;
        arrPtr[count] = getString(s, start, i);
        // free(arrPtr[count]);
        count++;;
    }
    arrPtr[count] = NULL;
    return (arrPtr);
}

int main(void)
{
	char s[] = "_+_42_+_tokyo_+___+_sei++_++";
	char sep = '+';
	char **a;
	a = ft_split(s,sep);
	printf("%s",a[0]);
	printf("%s",a[1]);
	printf("%s",a[2]);
	printf("%s",a[3]);
	printf("%s",a[4]);
	return (0);
}