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

// typedef struct s_test
// {
// 	const char	*big;
// 	const char	*little;
// 	size_t		n;
// 	const char	*expected_result;
// 	const char	*description;
// }	t_test;

// void print_test_header(void)
// {
// 	printf("╔════════════════════════════════════════════════════════════════╗\n");
// 	printf("║                   TEST ft_strnstr vs strnstr                   ║\n");
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

// // Función helper para simular strnstr con strstr
// static char *find_with_limit(const char *big, const char *little, size_t n)
// {
// 	char	*result;
// 	size_t	little_len;

// 	result = strstr(big, little);
// 	if (result == NULL)
// 		return (NULL);
// 	little_len = strlen(little);
// 	if ((size_t)(result - big) + little_len > n)
// 		return (NULL);
// 	return (result);
// }

// int test_strnstr(t_test test, int test_num)
// {
// 	char	*ret_original;
// 	char	*ret_mia;
// 	int		pass;

// 	print_test_case(test_num, test.description);

// 	// Llamar a ambas funciones
// 	ret_original = find_with_limit(test.big, test.little, test.n);
// 	ret_mia = ft_strnstr(test.big, test.little, test.n);

// 	// Comparar resultados
// 	pass = 1;

// 	printf("  Input big:    '%s'\n", test.big);
// 	printf("  Input little: '%s'\n", test.little);
// 	printf("  Input n:      %zu\n\n", test.n);

// 	printf("  Expected result: '%s'\n", test.expected_result);
// 	printf("  Original result: '%s'\n", ret_original ? ret_original : "(NULL)");
// 	printf("  Mía result:      '%s'\n", ret_mia ? ret_mia : "(NULL)");

// 	// Comparar punteros y contenido
// 	if ((ret_mia == NULL && ret_original == NULL) ||
// 		(ret_mia != NULL && ret_original != NULL && strcmp(ret_mia, ret_original) == 0))
// 	{
// 		printf("  ✓ PASS: results coinciden\n");
// 	}
// 	else
// 	{
// 		printf("  ✗ FAIL: results no coinciden\n");
// 		pass = 0;
// 	}

// 	// Comparar con el resultado esperado
// 	if (ret_mia == NULL && strcmp(test.expected_result, "(NULL)") == 0)
// 	{
// 		printf("  ✓ PASS: matches expected\n");
// 	}
// 	else if (ret_mia != NULL && strcmp(ret_mia, test.expected_result) == 0)
// 	{
// 		printf("  ✓ PASS: matches expected\n");
// 	}
// 	else
// 	{
// 		printf("  ✗ FAIL: doesn't match expected\n");
// 		pass = 0;
// 	}

// 	print_separator();
// 	return (pass);
// }

// int main(void)
// {
// 	t_test tests[] = {
// 		{
// 			"Hello World",
// 			"World",
// 			11,
// 			"World",
// 			"Substring al final"
// 		},
// 		{
// 			"Hello World",
// 			"Hello",
// 			11,
// 			"Hello World",
// 			"Substring al inicio"
// 		},
// 		{
// 			"Hello World",
// 			"o W",
// 			11,
// 			"o World",
// 			"Substring en el medio"
// 		},
// 		{
// 			"Hello World",
// 			"xyz",
// 			11,
// 			"(NULL)",
// 			"Substring no encontrada"
// 		},
// 		{
// 			"Hello World",
// 			"",
// 			11,
// 			"Hello World",
// 			"Little vacía (debe devolver big)"
// 		},
// 		{
// 			"Hello World",
// 			"World",
// 			5,
// 			"(NULL)",
// 			"n demasiado pequeño (substring fuera de rango)"
// 		},
// 		{
// 			"Hello World",
// 			"World",
// 			11,
// 			"World",
// 			"n exacto para encontrar substring"
// 		},
// 		{
// 			"ABCDEFGHIJ",
// 			"EFG",
// 			7,
// 			"EFGHIJ",
// 			"Substring dentro del rango n"
// 		},
// 		{
// 			"ABCDEFGHIJ",
// 			"HIJ",
// 			8,
// 			"(NULL)",
// 			"Substring comienza dentro pero no cabe en n"
// 		},
// 		{
// 			"AAA",
// 			"AA",
// 			3,
// 			"AAA",
// 			"Caracteres repetidos"
// 		},
// 		{
// 			"Test123Test",
// 			"Test",
// 			11,
// 			"Test123Test",
// 			"Primera ocurrencia encontrada"
// 		},
// 		{
// 			"a",
// 			"a",
// 			1,
// 			"a",
// 			"Un carácter coincide"
// 		},
// 		{
// 			"abc",
// 			"d",
// 			3,
// 			"(NULL)",
// 			"Un carácter no encontrado"
// 		},
// 		{
// 			"12345",
// 			"345",
// 			5,
// 			"345",
// 			"Números como string"
// 		},
// 		{
// 			"Hello World",
// 			"World",
// 			6,
// 			"(NULL)",
// 			"Substring no cabe en el rango n"
// 		},
// 	};

// 	int num_tests = sizeof(tests) / sizeof(tests[0]);
// 	int passed = 0;
// 	int i = 0;

// 	print_test_header();

// 	while (i < num_tests)
// 	{
// 		if (test_strnstr(tests[i], i + 1))
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
