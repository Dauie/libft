/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 11:59:54 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/07 20:24:10 by rlutt            ###   ########.fr       */
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
		if (!(tmp = ft_strnew(BUFF_SIZE))) /*1*/
			return (-1);
		db->rbyt = read(fd, tmp, BUFF_SIZE);
		bufftmp = db->content;
		if (!(db->content = ft_strjoin(db->content, tmp))) /*3*/
			return (-1);
		if (*bufftmp)
			ft_strdel(&bufftmp);			/*3*/
		ft_strdel(&tmp);					/*1*/
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
	if (!(*line = ft_strdup(db->content)))		/**/
		return (-1);
	if (!(db->content = ft_strdup(ep + 1)))		/**/
		return (-1);
	ft_strdel(&bufftmp);
	ft_strdel(&ep);
	return (1);
}

int					gnl(const int fd, char **line)
{
	static	t_list	db;

	if (fd < 0 || !line || BUFF_SIZE == 0)
		return (-1);
	if (!db.content)
		if (!(db.content = ft_strnew(BUFF_SIZE)))	/*2*/
			return (-1);
	if ((db.rbyt = ft_fillbuff(&db, fd)) < 0)
		return (-1);
	if (ft_strchr(db.content, '\n') != NULL)
		return (ft_xtrctline(&db, line));
	else if (*(char *)db.content)
	{
		if (!(*line = ft_strdup(db.content)))		/**/
			return (-1);
		if (*(char *)db.content)
			ft_strdel((char **)&db.content);			/*2*/
		return (1);
	}
	*line = NULL;
	return (0);
}
