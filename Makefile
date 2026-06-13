NAME = libft.a

# ╔════════════════════════════════════════════════════════════════╗
# ║                      LIBFT MAKEFILE                            ║
# ╚════════════════════════════════════════════════════════════════╝

# Compiler & Flags
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar
ARFLAGS		= rcs
RM			= rm -f

# Directories
SRC_DIR		= ./
OBJ_DIR		= obj/

# Header
HEADER		= libft.h

# ╔════════════════════════════════════════════════════════════════╗
# ║                    IMPLEMENTED FUNCTIONS                      ║
# ╚════════════════════════════════════════════════════════════════╝

MANDATORY_PART = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

BONUS_PART = \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

# ╔════════════════════════════════════════════════════════════════╗
# ║                   FILE SOURCES & OBJECTS                      ║
# ╚════════════════════════════════════════════════════════════════╝

MANDATORY_SRC	= $(addprefix $(SRC_DIR), $(MANDATORY_PART))
MANDATORY_OBJ	= $(addprefix $(OBJ_DIR), $(MANDATORY_PART:.c=.o))

BONUS_SRC		= $(addprefix $(SRC_DIR), $(BONUS_PART))
BONUS_OBJ		= $(addprefix $(OBJ_DIR), $(BONUS_PART:.c=.o))

ALL_OBJ			= $(MANDATORY_OBJ) $(BONUS_OBJ)

# ╔════════════════════════════════════════════════════════════════╗
# ║                         RULES                                  ║
# ╚════════════════════════════════════════════════════════════════╝

all: $(NAME)

$(NAME): $(MANDATORY_OBJ)
	@$(AR) $(ARFLAGS) $(NAME) $(MANDATORY_OBJ)
	@echo "✓ Library created: $(NAME)"

bonus: $(BONUS_OBJ)
	@$(AR) $(ARFLAGS) $(NAME) $(ALL_OBJ)
	@echo "✓ Library with bonus created: $(NAME)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEADER)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "⚙ Compiling: $<"

clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "✓ Object files removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "✓ Library removed"

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all bonus clean fclean re
