/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:32:37 by sabderra          #+#    #+#             */
/*   Updated: 2024/11/06 19:08:14 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *holder;

    if (!lst || !del)
        return ;
    while(*lst && del)
    {
        holder = (*lst) -> next;
        del((*lst) -> content);
        free(*lst);
        *lst = holder;
    }
}
