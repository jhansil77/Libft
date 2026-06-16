*Este proyecto ha sido creado como parte del currículo de 42 por [jhannsil].*

---

## Descripción

**Libft** es el primer proyecto oficial del currículo principal de 42. El objetivo principal es reprogramar una serie de funciones estándar de la librería de C (`libc`), así como funciones adicionales que no están presentes en el sistema de forma nativa, para comprender a fondo el funcionamiento de la memoria, la manipulación de strings y la gestión de estructuras de datos básicas.

Este proyecto sirve como la base de herramientas personal que se utilizará en prácticamente todos los proyectos futuros de C en la escuela, ya que el uso de las funciones estándar del sistema está estrictamente limitado.

---

## Descripción detallada de la librería

La librería se compila como un archivo de archivo estático (`libft.a`) e incluye las siguientes categorías de funciones:

### 1. Funciones de la biblioteca estándar de C (`libc`)
Reimplementaciones de funciones clásicas con el prefijo `ft_`:
*   **Comprobación de caracteres:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`.
*   **Manipulación de caracteres:** `ft_toupper`, `ft_tolower`.
*   **Gestión de memoria:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
*   **Manipulación de strings:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.

### 2. Funciones adicionales
Funciones que no pertenecen a la librería estándar o que se han adaptado para facilitar el desarrollo en C:
*   `ft_substr`: Extrae una subcadena de un string.
*   `ft_strjoin`: Concatena dos strings en una nueva zona de memoria.
*   `ft_strtrim`: Elimina caracteres específicos del principio y del final de un string.
*   `ft_split`: Divide un string en una matriz de strings utilizando un carácter delimitador.
*   `ft_itoa`: Convierte un número entero en un string.
*   `ft_strmapi` y `ft_striteri`: Aplican una función a cada carácter de un string.
*   `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Permiten escribir caracteres, strings o números en un descriptor de archivo específico.

### 3. Funciones de listas enlazadas (Parte Bonus)
Funciones para manipular estructuras de datos de tipo lista enlazada simple (`t_list`):
*   `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

---

## Instrucciones

### Requisitos previos
*   Compilador `gcc` o `clang`.
*   Herramienta `make`.

### Compilación e Instalación
Para compilar la librería, clona el repositorio, navega a la raíz del proyecto y ejecuta uno de los siguientes comandos en la terminal:

```bash
# Compila las funciones obligatorias y genera libft.a
make

# Compila las funciones obligatorias más las funciones de listas enlazadas (Bonus)
make bonus

# Elimina los archivos objeto (.o) generados durante la compilación
make clean

# Elimina los archivos objeto y el archivo de la librería (libft.a)
make fclean

# Realiza una limpieza total y vuelve a compilar todo
make re
