/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 16:43:03 by wharghaz          #+#    #+#             */
/*   Updated: 2019/09/25 17:14:44 by wharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_arr_dsort(int *arr, int len)
{
	int	i;
	int	tnum;

	i = 0;
	tnum = 0;
	while (i + 1 < len)
	{
		if (arr[i] < arr[i + 1])
		{
			tnum = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = tnum;
			i = 0;
		}
		else
			++i;
	}
	return (arr);
}
