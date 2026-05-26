#include "libft.h"

static size_t	ft_str_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

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
void	*ft_c_alloc(size_t count, size_t size)
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

char	*ft_strdup(const char *s1)
{
	size_t s1_len;
	char *copy;
	size_t i;

	s1_len = ft_str_len(s1) + 1;
	copy = (char *)ft_c_alloc(s1_len, 1);
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
// void test_strdup(const char *test_name, const char *test_str)
// {
// 	char *original;
// 	char *mia;

// 	original = strdup(test_str);
// 	mia = ft_strdup(test_str);

// 	printf("Test: %s\n", test_name);
// 	printf("  Original: %s\n", original);
// 	printf("  Mía:      %s\n", mia);

// 	if (strcmp(original, mia) == 0)
// 		printf("  ✓ PASS\n");
// 	else
// 		printf("  ✗ FAIL\n");
// 	free(original);
// 	free(mia);
// 	printf("\n");
// }

// int main(void)
// {
// 	test_strdup("String normal", "Hola Mundo");
// 	test_strdup("String vacío", "");
// 	test_strdup("Un carácter", "A");
// 	test_strdup("Con números", "123456");
// 	test_strdup("Con espacios", "   espacios   ");
// 	return (0);
// }