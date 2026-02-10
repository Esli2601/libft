/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eambinin <eambinin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:13:08 by eambinin          #+#    #+#             */
/*   Updated: 2026/02/09 00:10:59 by eambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	max;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	max = size - len_dst - 1;
	i = 0;
	if (len_dst >= size)
		return (size + len_src);
	while (src[i] != '\0' && max > 0)
	{
		dst[len_dst + i] = src[i];
		i++;
		max--;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
