#include "libft.h"

char	*ft_strnstr(const char *find, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return ((char *)find);
	i = 0;
	while (find[i] != '\0' && i < n)
	{
		j = 0;
		while (find[i + j] == to_find[j] && (i + j) < n)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&find[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}