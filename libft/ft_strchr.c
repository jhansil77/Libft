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
