/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:07:11 by seono             #+#    #+#             */
/*   Updated: 2023/05/30 17:56:43 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int sign;
	int digit;
    long unsigned_num;

    while (*nptr == ' ' || *nptr == '\t')
        nptr++;
    sign = 1;
    if (*nptr == '-')
    {
        sign = -1;
        nptr++;
    }
    else if (*nptr == '+')
        nptr++;
    unsigned_num = 0;
    while ('0' <= *nptr && *nptr <= '9')
    {
		digit = *nptr - '0';
		if (sign == 1 && (LONG_MAX - digit) / 10 < unsigned_num)
			return -1;
		if (sign == - 1 && (LONG_MIN + digit) / 10 > -unsigned_num)
			return 0;
        unsigned_num = unsigned_num * 10 + digit;
        nptr++;
    }
    return (sign * (int)unsigned_num);
}
