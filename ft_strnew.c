/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:08:33 by wharghaz          #+#    #+#             */
/*   Updated: 2019/09/25 17:45:35 by wharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;

	if (size + 1 < size)
		return (NULL);
	if (!(new = (char *)ft_memalloc(size + 1)))
		return (NULL);
	ft_memset(new, '\0', size + 1);
	return (new);
}
