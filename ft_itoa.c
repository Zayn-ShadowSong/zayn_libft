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
            n =-n; // we make n positive to count the digits correctly.
    }
    while (n > 0)
    {
        n /=10; // we divide n by 10 to remove the last digit, and we increment len to count how many digits are in n.
        len++;
    }
    return (len);
}
char *ft_itoa(int n)
{
    char *str;
    int len;
    long long num;

    num = n;
    len = get_len(num);
    str = (char *)malloc(sizeof(char) * (len +1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (num == 0)
        str[0] = '0';
    if (num < 0)
    {
        str [0] = "-";
        num = -num;
    }
    while (num > 0)
    {
        str[--len] = (num %10) + '0'; // we get the last digit of num and convert it to a character by adding '0'.
        num /= 10; // we remove the last digit from num by dividing it by 10.
    }
    return (str);
}