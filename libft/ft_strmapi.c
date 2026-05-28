#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	char	*ptr;
	int	i;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	ptr = (char *)ft_calloc(s_len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}