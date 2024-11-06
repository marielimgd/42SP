/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:55:25 by marielidias       #+#    #+#             */
/*   Updated: 2024/11/06 18:21:47 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
    size_t	index;
	
	index = ft_strlen(str);
    if ((char)c == '\0')
        return ((char *)&str[index]);
    while (index > 0)
    {
        if (str[index] == (char)c)
            return ((char *)&str[index]);
        index--;
    }
    if (str[index] == (char)c)
        return ((char *)&str[index]);
    return (NULL);
}
