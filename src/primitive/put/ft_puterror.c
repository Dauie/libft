/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 15:34:15 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/put.h"

int		ft_puterror(int ecode)
{
	ft_printf("Exiting due to error: (ecode %d)\n", ecode);
	if (ecode == -1)
		ft_printf("General Failure\n");
	else if (ecode == -2)
		ft_printf("Please provide a directory.\n");
	else if (ecode == -3)
		ft_printf("SYSTEM: ** MALLOC FAILURE **");
	else if (ecode == -4)
		ft_printf("SYSTEM: ** FAILURE OPENING DIRECTORY **");
	return (ecode);
}
