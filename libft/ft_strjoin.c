#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s3_len;

	if (!s1 || !s2)
		return (NULL);
	s3_len = ft_strlen(s1) + ft_strlen((s2));
	s3 = (char *)ft_calloc(s3_len + 1, sizeof(char));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
	ft_strlcat(s3, s2, s3_len + 1);
	return (s3);
}
