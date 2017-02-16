/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:07:38 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:49:09 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H

# include "mem.h"
# include "str.h"

typedef	struct		s_list
{
	long long		rbyt;
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_lsteadd(t_list **alst, t_list *nw);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *nw);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstnewstak(void const *content, size_t content_size);
size_t				ft_lstlen(t_list *lst);

#endif
