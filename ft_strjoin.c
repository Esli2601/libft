/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eambinin <eambinin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 20:26:25 by eambinin          #+#    #+#             */
/*   Updated: 2026/02/06 11:36:54 by eambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	newstr = malloc(i + j + 1);
	if (!newstr)
		return (NULL);
	k = 0;
	while (k < i)
	{
		newstr[k] = s1[k];
		k++;
	}
	j = 0;
	while (s2[j])
	{
		newstr[k++] = s2[j++];
	}
	newstr[k] = '\0';
	return (newstr);
}
