/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:35:16 by wharghaz          #+#    #+#             */
/*   Updated: 2019/09/19 20:05:04 by wharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *subs;

	if (!(subs = ft_strnew(len)) || !s)
		return (NULL);
	subs = ft_memcpy(subs, s + start, len);
	return (subs);
}
