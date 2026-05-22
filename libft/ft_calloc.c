#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	len;

	len = count * size;
	p = malloc(len);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, len);
	return (p);
}