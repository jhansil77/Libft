#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t src_len;

	src_len = ft_strlen(src);
	if (n == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}