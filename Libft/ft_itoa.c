/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:27:16 by marvin            #+#    #+#             */
/*   Updated: 2023/06/02 17:30:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int str_size(long num)
{
    int count;

    count = 0;
    if (num < 0)
    {
        num *= -1;
        count++;
    }
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return (count);
}

static void handle_zero(char *str)
{
    str = malloc(sizeof(char) * 2);
    str[0] = '0';
    str[1] = '\0';
}

char *ft_itoa(int n)
{
    int count;
    long num;
    char *str;

    num = (long)n;
    if (num == 0)
    {
        handle_zero(str);
        return (str);
    }
    count = str_size(num);
    str = malloc(sizeof(char) * (count + 1));
    str[count] = '\0';
    if (num < 0)
    {
        str[0] = '-';
        num *= -1;
    }
    while (num != 0)
    {
        str[count - 1] = num % 10 + '0';
        num /= 10;
        count--;
    }   
    return (str);
}
