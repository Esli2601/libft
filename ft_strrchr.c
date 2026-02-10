/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eambinin <eambinin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:05:02 by eambinin          #+#    #+#             */
/*   Updated: 2026/02/04 15:15:58 by eambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len_s;
	int	i;

	len_s = ft_strlen(s);
	i = len_s;
	while (i >= 0)
	{
		if ((char)c == s[i])
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
