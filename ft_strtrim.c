/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eambinin <eambinin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 21:01:52 by eambinin          #+#    #+#             */
/*   Updated: 2026/02/10 10:37:24 by eambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_is_here(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*s_set_null(char const *s1, char const *set)
{
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*ptr;

	if (!s1 || !set)
		return (s_set_null(s1, set));
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && set_is_here(s1[i], set))
		i++;
	while (j > i && set_is_here(s1[j - 1], set))
		j--;
	ptr = malloc(j - i + 1);
	if (!ptr)
		return (NULL);
	k = 0;
	while (k < (j - i))
	{
		ptr[k] = s1[i + k];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
