#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	char	*found;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < n)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < n)
		{
			if (little[j + 1] == '\0')
			{
				found = (char *)(big + i);
				return (found);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
