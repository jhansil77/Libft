#include "libft.h"

static	size_t	ft_str_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	s_len = ft_str_len(src);
	d_len = ft_str_len(dest);
	if (n <= d_len)
		return (n + s_len);
	i = 0;
	while (src[i] && (d_len + i) < (n - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
