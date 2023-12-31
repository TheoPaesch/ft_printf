/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:01:40 by tpaesch           #+#    #+#             */
/*   Updated: 2023/10/14 17:08:29 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int num)
{
	int		i;
	char	*str;

	str = s;
	i = 0;
	while (num > i)
	{
		str[i] = '\0';
		i++;
	}
}
