#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
			i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// typedef struct s_test
// {
// 	const char	*s1;
// 	const char	*s2;
// 	size_t		n;
// 	int			expected_return;
// 	const char	*description;
// }	t_test;

// void print_test_header(void)
// {
// 	printf("╔════════════════════════════════════════════════════════════════╗\n");
// 	printf("║                   TEST ft_strncmp vs strncmp                   ║\n");
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

// int normalize_return(int value)
// {
// 	if (value < 0)
// 		return (-1);
// 	if (value > 0)
// 		return (1);
// 	return (0);
// }

// int test_strncmp(t_test test, int test_num)
// {
// 	int	ret_original;
// 	int	ret_mia;
// 	int	pass;

// 	print_test_case(test_num, test.description);

// 	// Llamar a ambas funciones
// 	ret_original = strncmp(test.s1, test.s2, test.n);
// 	ret_mia = ft_strncmp(test.s1, test.s2, test.n);

// 	// Normalizar returns (-1, 0, 1)
// 	ret_original = normalize_return(ret_original);
// 	ret_mia = normalize_return(ret_mia);

// 	// Comparar resultados
// 	pass = 1;

// 	printf("  Input s1: '%s'\n", test.s1);
// 	printf("  Input s2: '%s'\n", test.s2);
// 	printf("  Input n:  %zu\n\n", test.n);

// 	printf("  Expected return: %d\n", test.expected_return);
// 	printf("  Original return: %d\n", ret_original);
// 	printf("  Mía return:      %d\n", ret_mia);

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
// 			"Hello",
// 			"Hello",
// 			5,
// 			0,
// 			"Strings idénticas"
// 		},
// 		{
// 			"Hello",
// 			"Hello",
// 			10,
// 			0,
// 			"Strings idénticas, n mayor que longitud"
// 		},
// 		{
// 			"Hello",
// 			"World",
// 			5,
// 			-1,
// 			"s1 menor que s2"
// 		},
// 		{
// 			"World",
// 			"Hello",
// 			5,
// 			1,
// 			"s1 mayor que s2"
// 		},
// 		{
// 			"Hello",
// 			"Help",
// 			3,
// 			0,
// 			"Primeros 3 caracteres iguales"
// 		},
// 		{
// 			"Hello",
// 			"Help",
// 			4,
// 			-1,
// 			"Diferencia en el 4to carácter"
// 		},
// 		{
// 			"Hello",
// 			"Hello",
// 			0,
// 			0,
// 			"n = 0 (sin comparar)"
// 		},
// 		{
// 			"A",
// 			"B",
// 			1,
// 			-1,
// 			"Un carácter, s1 < s2"
// 		},
// 		{
// 			"ABC",
// 			"ABD",
// 			2,
// 			0,
// 			"Primeros 2 caracteres iguales"
// 		},
// 		{
// 			"ABC",
// 			"ABD",
// 			3,
// 			-1,
// 			"Diferencia en el 3er carácter"
// 		},
// 		{
// 			"Test123",
// 			"Test456",
// 			4,
// 			0,
// 			"Primeros 4 caracteres iguales (números ignorados)"
// 		},
// 		{
// 			"Test123",
// 			"Test456",
// 			5,
// 			-1,
// 			"Diferencia en el 5to carácter"
// 		},
// 		{
// 			"HELLO",
// 			"hello",
// 			5,
// 			-1,
// 			"Mayúsculas vs minúsculas"
// 		},
// 		{
// 			"abc",
// 			"abc",
// 			1,
// 			0,
// 			"Primer carácter solo"
// 		},
// 		{
// 			"",
// 			"",
// 			5,
// 			0,
// 			"Ambas strings vacías"
// 		},
// 	};

// 	int num_tests = sizeof(tests) / sizeof(tests[0]);
// 	int passed = 0;
// 	int i = 0;

// 	print_test_header();

// 	while (i < num_tests)
// 	{
// 		if (test_strncmp(tests[i], i + 1))
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