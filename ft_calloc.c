/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:31:31 by sabderra          #+#    #+#             */
/*   Updated: 2024/11/04 12:04:56 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*d ;

	d = malloc (sizeof(char) * (count * size));
	if (d == NULL)
		return (NULL);
	ft_bzero (d, count * size);
	return (d);
}
