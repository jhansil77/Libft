#include "libft.h"

static	size_t	ft_str_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t src_len;

	src_len = ft_str_len(src);
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
// #define BUFFER_SIZE 100

// typedef struct s_test
// {
// 	const char	*src;
// 	size_t		n;
// 	const char	*expected_dest;
// 	size_t		expected_return;
// 	const char	*description;
// }	t_test;

// void print_test_header(void)
// {
// 	printf("╔════════════════════════════════════════════════════════════════╗\n");
// 	printf("║                    TEST ft_strlcpy vs strlcpy                  ║\n");
// 	printf("╚════════════════════════════════════════════════════════════════╝\n\n");
// }

// void print_test_case(int test_num, const char *description)
// {
// 	printf("┌─ Test %d: %s\n", test_num, description);
// }

// void print_separator(void)
// {
// 	printf("└────────────────────────────────────────────────────────────────\n\n");
// }

// int test_strlcpy(t_test test, int test_num)
// {
// 	char	dest_original[BUFFER_SIZE];
// 	char	dest_mia[BUFFER_SIZE];
// 	size_t	ret_original;
// 	size_t	ret_mia;
// 	int		pass;

// 	print_test_case(test_num, test.description);

// 	// Inicializar buffers
// 	memset(dest_original, 0, BUFFER_SIZE);
// 	memset(dest_mia, 0, BUFFER_SIZE);

// 	// Llamar a ambas funciones
// 	ret_original = strlcpy(dest_original, test.src, test.n);
// 	ret_mia = ft_strlcpy(dest_mia, test.src, test.n);

// 	// Comparar resultados
// 	pass = 1;

// 	printf("  Input src: '%s'\n", test.src);
// 	printf("  Input n:   %zu\n\n", test.n);

// 	printf("  Expected dest: '%s'\n", test.expected_dest);
// 	printf("  Original dest: '%s'\n", dest_original);
// 	printf("  Mía dest:      '%s'\n", dest_mia);

// 	if (strcmp(dest_mia, test.expected_dest) != 0)
// 	{
// 		printf("  ✗ FAIL: dest no coincide\n");
// 		pass = 0;
// 	}
// 	else
// 		printf("  ✓ PASS: dest coincide\n");

// 	printf("\n  Expected return: %zu\n", test.expected_return);
// 	printf("  Original return: %zu\n", ret_original);
// 	printf("  Mía return:      %zu\n", ret_mia);

// 	if (ret_mia != test.expected_return || ret_mia != ret_original)
// 	{
// 		printf("  ✗ FAIL: return value no coincide\n");
// 		pass = 0;
// 	}
// 	else
// 		printf("  ✓ PASS: return value coincide\n");

// 	print_separator();
// 	return (pass);
// }

// int main(void)
// {
// 	t_test tests[] = {
// 		{
// 			"Hello World",
// 			20,
// 			"Hello World",
// 			11,
// 			"Copia simple con espacio suficiente"
// 		},
// 		{
// 			"Hello World",
// 			6,
// 			"Hello",
// 			11,
// 			"Truncada (n = 6)"
// 		},
// 		{
// 			"Hello World",
// 			1,
// 			"",
// 			11,
// 			"Solo espacio para NULL terminator"
// 		},
// 		{
// 			"Hello World",
// 			0,
// 			"",
// 			11,
// 			"n = 0 (sin copiar nada)"
// 		},
// 		{
// 			"A",
// 			5,
// 			"A",
// 			1,
// 			"Un carácter"
// 		},
// 		{
// 			"",
// 			10,
// 			"",
// 			0,
// 			"String vacía"
// 		},
// 		{
// 			"Test123",
// 			4,
// 			"Tes",
// 			7,
// 			"Números truncados"
// 		},
// 		{
// 			"Hello World! This is a very long string",
// 			15,
// 			"Hello World! T",
// 			39,
// 			"String muy larga, truncada"
// 		},
// 		{
// 			"X",
// 			2,
// 			"X",
// 			1,
// 			"Un carácter con espacio extra"
// 		},
// 		{
// 			"Multiple   Spaces",
// 			20,
// 			"Multiple   Spaces",
// 			17,
// 			"String con espacios múltiples"
// 		},
// 	};

// 	int num_tests = sizeof(tests) / sizeof(tests[0]);
// 	int passed = 0;
// 	int i = 0;

// 	print_test_header();

// 	while (i < num_tests)
// 	{
// 		if (test_strlcpy(tests[i], i + 1))
// 			passed++;
// 		i++;
// 	}

// 	printf("╔════════════════════════════════════════════════════════════════╗\n");
// 	printf("║ RESULTADO: %d/%d tests pasados                                 ║\n", passed, num_tests);
// 	printf("╚════════════════════════════════════════════════════════════════╝\n");

// 	if (passed == num_tests)
// 		return (0);
// 	else
// 		return (1);
// }
