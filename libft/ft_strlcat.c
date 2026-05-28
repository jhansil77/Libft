#include "libft.h"

static	size_t	ft_str_len(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	src_len;
	size_t i;

	i = 0;
	dest_len = ft_str_len(dest);
	src_len = ft_str_len(src);
	if (n == 0)
		return (dest_len + src_len);
	if (n <= dest_len)
		return (n + src_len);
	while (src[i] != '\0' && dest_len + i < n - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
