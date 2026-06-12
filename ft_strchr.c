/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhannsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 13:19:19 by jhannsil          #+#    #+#             */
/*   Updated: 2026/06/12 13:19:20 by jhannsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*found;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			found = (char *)(s + i);
			return (found);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		found = (char *)(s + i);
		return (found);
	}
	return (NULL);
}
