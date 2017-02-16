/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 11:59:54 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:26:22 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/gnl.h"

static size_t		ft_fillbuff(t_list *db, const int fd)
{
	char			*tmp;
	char			*bufftmp;

	tmp = NULL;
	db->rbyt = 1;
	while (db->rbyt > 0 && ft_strchr(db->content, '\n') == NULL)
	{
		if (!(tmp = ft_strnew(BUFF_SIZE)))
			return (-1);
		db->rbyt = read(fd, tmp, BUFF_SIZE);
		bufftmp = db->content;
		db->content = ft_strjoin(db->content, tmp);
		if (*bufftmp)
			ft_strdel(&bufftmp);
		ft_strdel(&tmp);
	}
	return (db->rbyt);
}

static size_t		ft_xtrctline(t_list *db, char **line)
{
	char			*ep;
	char			*bufftmp;

	bufftmp = db->content;
	ep = ft_strchr(db->content, '\n');
	ep[0] = '\0';
	*line = ft_strdup(db->content);
	db->content = ft_strdup(ep + 1);
	if (*bufftmp)
		ft_strdel(&bufftmp);
	if (*ep)
		ft_strdel(&ep);
	return (1);
}

int					gnl(const int fd, char **line)
{
	static	t_list	db;

	if (fd < 0 || !line || BUFF_SIZE == 0)
		return (-1);
	if (!db.content)
	{
		if (!(db.content = ft_strnew(BUFF_SIZE)))
			return (-1);
	}
	if ((db.rbyt = ft_fillbuff(&db, fd)) < 0)
		return (-1);
	if (ft_strchr(db.content, '\n') != NULL)
		return (ft_xtrctline(&db, line));
	if (*(char *)db.content)
	{
		*line = ft_strdup(db.content);
		if (*(char *)db.content)
			ft_strdel((char **)db.content);
		return (1);
	}
	*line = NULL;
	return (0);
}
