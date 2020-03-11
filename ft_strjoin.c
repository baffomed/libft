/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:05:28 by wharghaz          #+#    #+#             */
/*   Updated: 2019/09/25 17:35:31 by wharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *jstr;

	if (!s1 || !s2)
		return (0);
	if (!(jstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	jstr = ft_strcat(jstr, s1);
	jstr = ft_strcat(jstr, s2);
	return (jstr);
}
