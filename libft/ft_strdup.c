#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t s1_len;
	char *copy;
	size_t i;

	s1_len = ft_strlen(s1) + 1;
	copy = (char *) malloc(s1_len * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}