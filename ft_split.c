/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eambinin <eambinin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 01:09:53 by eambinin          #+#    #+#             */
/*   Updated: 2026/02/07 20:56:45 by eambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_delim(char const *del, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (del[i])
	{
		if (del[i] != c && (i == 0 || del[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_split(char **split, int j)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (i < j)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (count_delim(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			split[j] = ft_substr(s, i, ft_word_len(s + i, c));
			if (!split[j++])
				return (free_split(split, j), NULL);
			i += ft_word_len(s + i, c);
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}
