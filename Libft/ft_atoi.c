/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:07:11 by seono             #+#    #+#             */
/*   Updated: 2023/05/25 16:33:57 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int atoi(const char *nptr)
{
    int sign;
    int unsigned_num;

    while (*nptr == ' ' || *nptr == '\t')
    {
        *nptr++;
    }
    sign = 1;
    if (*nptr == '-')
    {
        sign = -1;
        *nptr++;
    }
    else if (*nptr == '+')
        *nptr++;
    unsigned_num = 0;
    while ('0' <= *nptr && *nptr <= '9')
    {
        unsigned_num += unsigned_num * 10 + *nptr;
        nptr++;
    }
    return (sign * unsigned_num);
}
