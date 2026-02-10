/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eambinin <eambinin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 20:28:55 by eambinin          #+#    #+#             */
/*   Updated: 2026/02/05 16:10:20 by eambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_number(int n)
{
	int	len;
	int	temp;

	len = 0;
	temp = n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		temp *= -1;
		len++;
	}
	while (temp > 0)
	{
		temp = temp / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;
	char	sign;

	len = ft_count_number(n);
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (len--)
	{
		ptr[len] = (n % 10) + 48;
		n = n / 10;
	}
	if (sign == -1)
		ptr[0] = '-';
	return (ptr);
}
