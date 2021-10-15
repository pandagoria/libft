/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaunch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:02:03 by hlaunch           #+#    #+#             */
/*   Updated: 2021/10/15 15:02:05 by hlaunch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) haystack;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	else if (len == 0)
		return (0);
	else if ((int)len < 0)
		len = ft_strlen(haystack);
	i = 0;
	while (i < len)
	{
		if (ft_strlen(needle) > len - i)
			break ;
		else
		{
			if (ft_strncmp(&str[i], needle, ft_strlen(needle)) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
