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
		return (dest_len);
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

// #define BUFFER_SIZE 100

// typedef struct s_test
// {
// 	const char	*dest_init;
// 	const char	*src;
// 	size_t		n;
// 	const char	*expected_dest;
// 	size_t		expected_return;
// 	const char	*description;
// }	t_test;

// void print_test_header(void)
// {
// 	printf("╔════════════════════════════════════════════════════════════════╗\n");
// 	printf("║                    TEST ft_strlcat vs strlcat                  ║\n");
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

// int test_strlcat(t_test test, int test_num)
// {
// 	char	dest_original[BUFFER_SIZE];
// 	char	dest_mia[BUFFER_SIZE];
// 	size_t	ret_original;
// 	size_t	ret_mia;
// 	int		pass;

// 	print_test_case(test_num, test.description);

// 	// Inicializar buffers
// 	strcpy(dest_original, test.dest_init);
// 	strcpy(dest_mia, test.dest_init);

// 	// Llamar a ambas funciones
// 	ret_original = strlcat(dest_original, test.src, test.n);
// 	ret_mia = ft_strlcat(dest_mia, test.src, test.n);

// 	// Comparar resultados
// 	pass = 1;

// 	printf("  Input dest: '%s'\n", test.dest_init);
// 	printf("  Input src:  '%s'\n", test.src);
// 	printf("  Input n:    %zu\n\n", test.n);

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
// 	{
// 		"Hello",
// 		" World",
// 		15,
// 		"Hello World",
// 		11,
// 		"Concatenación simple con espacio suficiente"
// 	},
// 	{
// 		"Hello",
// 		" World",
// 		8,
// 		"Hello W",        // ← CORREGIDO
// 		11,
// 		"Sin espacio suficiente (truncada)"
// 	},
// 	{
// 		"",
// 		"World",
// 		10,
// 		"World",
// 		5,
// 		"dest vacía, src con contenido"
// 	},
// 	{
// 		"Hello",
// 		"",
// 		10,
// 		"Hello",
// 		5,
// 		"src vacía, dest con contenido"
// 	},
// 	{
// 		"",
// 		"",
// 		10,
// 		"",
// 		0,
// 		"Ambas vacías"
// 	},
// 	{
// 		"A",
// 		"B",
// 		3,
// 		"AB",
// 		2,
// 		"Caracteres individuales"
// 	},
// 	{
// 		"A",
// 		"B",
// 		1,
// 		"A",
// 		2,
// 		"Sin espacio para concatenar"
// 	},
// 	{
// 		"Hello",
// 		" World! This is a long string",
// 		20,
// 		"Hello World! This i",
// 		34,        // ← CORREGIDO
// 		"src muy larga, truncada"
// 	},
// 	{
// 		"Test",
// 		"123",
// 		7,
// 		"Test12",        // ← CORREGIDO
// 		7,
// 		"Números como string"
// 	},
// 	{
// 		"A",
// 		"B",
// 		0,
// 		"A",
// 		1,        // ← CORREGIDO
// 		"n = 0 (sin copiar)"
// 	},
// };
// 	int num_tests = sizeof(tests) / sizeof(tests[0]);
// 	int passed = 0;
// 	int i = 0;

// 	print_test_header();

// 	while (i < num_tests)
// 	{
// 		if (test_strlcat(tests[i], i + 1))
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