/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:22:47 by marvin            #+#    #+#             */
/*   Updated: 2026/10/08 16:22:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new_str;
    unsigned int i;
    size_t len;

    i = 0;
    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    new_str = (char *)malloc(sizeof(char) * (len + 1));
    if(!new_str)
        return (NULL);
    while (s[i])
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}
