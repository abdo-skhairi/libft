/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:28:05 by sabderra          #+#    #+#             */
/*   Updated: 2024/11/04 13:06:51 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmp(char *str, char *to_find, size_t n)
{
	size_t	i;

	i = 0;
	while (to_find[i] && i < n)
	{
		if (str[i] != to_find[i])
			return (1);
		i++;
	}
	if (to_find[i] == '\0')
		return (0);
	return(1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (len == 0 && !haystack)
		return(NULL);
	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while ((char)haystack[i] && i < len)
	{
		if ((char)haystack[i] == (char)needle[0])
		{
			if ((ft_cmp((char *)haystack + i, (char *)needle, len - i)) == 0)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
