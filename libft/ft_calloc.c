#include "libft.h"
#include <stdlib.h>

static void	ft_b_zero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t	i;

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

	if (count == 0 || size == 0)
		return (NULL);
	if (size > SIZE_MAX / count)
		return (NULL);
	len = count * size;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	ft_b_zero(ptr, len);
	return (ptr);
}