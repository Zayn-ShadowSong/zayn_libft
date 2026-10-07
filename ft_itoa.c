/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 08:28:11 by codespace         #+#    #+#             */
/*   Updated: 2026/10/07 08:34:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

int get_len(long long n)
{
    int len;
    
    len = 0;
    if (n <= 0) // this part is to handle the case when n is 0 or negative, as we need at least one character for '0' or the negative sign.
    {
        len++; // for '0' or '-'
        if (n < 0) // if n is negative, we will need an extra character for the '-' sign.
            n =-n;
    }
    while (n > 0)
    {
        n /=10;
        len++;
    }
    return (len);
}
char *ft_itoa(int n)
{

}