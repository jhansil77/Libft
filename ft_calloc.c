/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhannsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 13:12:57 by jhannsil          #+#    #+#             */
/*   Updated: 2026/06/12 13:13:00 by jhannsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_b_zero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	len = count * size;
	if (len == 0)
		len = 1;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	ft_b_zero(ptr, len);
	return (ptr);
}
