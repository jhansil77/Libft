# 📚 Libft - @jhannsil

<p align="center">
  <img src="https://img.shields.io/badge/42-%20Madrid-black?style=for-the-badge&logo=42" alt="42 Madrid" />
  <img src="https://img.shields.io/badge/Score-125%20%2F%20125-success?style=for-the-badge" alt="Score 125/125" />
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="Language C" />
</p>

## 📝 Resumen
**Libft** es el primer proyecto oficial del Common Core de 42. Consiste en programar nuestra propia librería en C, recreando funciones estándar de la `libc` así como otras funciones adicionales.

---

## 🛠️ Funciones Implementadas

### 🔹 Parte 1: Funciones de libc (Recreaciones)
* `ft_isalpha` - Comprueba si es un carácter alfabético.
* `ft_isdigit` - Comprueba si es un dígito.
* `ft_isalnum` - Comprueba si es alfanumérico.
* `ft_isascii` - Comprueba si pertenece al código ASCII.
* `ft_isprint` - Comprueba si es un carácter imprimible.
* `ft_strlen` - Calcula la longitud de una cadena.
* `ft_memset` - Llena la memoria con un byte constante.
* `ft_bzero` - Escribe ceros en una porción de memoria.
* `ft_memcpy` - Copia un área de memoria.
* `ft_memmove` - Copia un área de memoria de forma segura ante solapamientos.
* `ft_strlcpy` - Copia cadenas respetando el tamaño del búfer.
* `ft_strlcat` - Concatena cadenas respetando el tamaño del búfer.
* `ft_toupper` - Convierte a mayúscula.
* `ft_tolower` - Convierte a minúscula.
* `ft_strchr` - Localiza un carácter en una cadena.
* `ft_strrchr` - Localiza un carácter en una cadena empezando por el final.
* `ft_strncmp` - Compara dos cadenas hasta un número `n`.
* `ft_memchr` - Localiza un byte en un bloque de memoria.
* `ft_memcmp` - Compara dos bloques de memoria.
* `ft_strnstr` - Localiza una subcadena dentro de otra con límite de longitud.
* `ft_atoi` - Convierte una cadena de caracteres a entero.
* `ft_calloc` - Reserva memoria dinámica inicializándola a cero.
* `ft_strdup` - Duplica una cadena asignando nueva memoria.

### 🔸 Parte 2: Funciones Adicionales
* `ft_substr` - Crea una subcadena a partir de una cadena principal.
* `ft_strjoin` - Concatena dos cadenas en una nueva porción de memoria.
* `ft_strtrim` - Elimina caracteres específicos del inicio y fin de una cadena.
* `ft_split` - Divide una cadena en un array de subcadenas usando un separador.
* `ft_itoa` - Convierte un número entero a cadena de caracteres.
* `ft_strmapi` - Aplica una función a cada carácter de una cadena creando una nueva.
* `ft_striteri` - Aplica una función a cada carácter de una cadena (por referencia).
* `ft_putchar_fd` - Escribe un carácter en un descriptor de archivo dado.
* `ft_putstr_fd` - Escribe una cadena en un descriptor de archivo dado.
* `ft_putendl_fd` - Escribe una cadena seguida de un salto de línea en un fd.
* `ft_putnbr_fd` - Escribe un número entero en un descriptor de archivo dado.

### 🟢 Parte 3: Listas Enlazadas
* `ft_lstnew` - Crea un nuevo nodo de lista.
* `ft_lstadd_front` - Añade un nodo al principio de la lista.
* `ft_lstsize` - Cuenta el número de nodos de la lista.
* `ft_lstlast` - Devuelve el último nodo de la lista.
* `ft_lstadd_back` - Añade un nodo al final de la lista.
* `ft_lstdelone` - Libera la memoria de un nodo usando una función dada.
* `ft_lstclear` - Elimina y libera una lista entera de forma segura.
* `ft_lstiter` - Aplica una función a todos los nodos de la lista.
* `ft_lstmap` - Crea una lista nueva modificada a partir de otra existente aplicando una función.

---

## 🚀 Compilación y Uso

El proyecto incluye un `Makefile`.

### Comandos disponibles:

Compila las partes obligatorias y genera el archivo de librería `libft.a`:
```bash
make
