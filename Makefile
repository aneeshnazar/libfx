NAME= libfx.a
CC=gcc
FLAGS= -Wall -Werror -Wextra
LFLAG=
FILES=place_at ft_rgb init_img draw_img init_scr init_coord
LIBFILES = ft_memalloc ft_bzero ft_memset ft_putnbr ft_putchar ft_putstr ft_putendl ft_strlen
SRCDIR = srcs/
LIBDIR = libft/
MLXDIR = minilibx_macos/
INCDIR = includes/
MLXOBJ = mlx_init_loop.o mlx_int_str_to_wordtab.o mlx_new_image.o \
		mlx_new_window.o mlx_shaders.o mlx_xpm.o
LIBOBJ = $(addprefix $(LIBDIR), $(patsubst %, %.o, $(LIBFILES)))
LIB=$(addprefix $(LIBDIR), $(patsubst %, %.c, $(FILES)))
SRC=$(addprefix $(SRCDIR), $(patsubst %, %.c, $(FILES)))
OBJ=$(patsubst %, %.o, $(FILES)) $(addprefix $(MLXDIR), $(MLXOBJ)) $(LIBOBJ)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(MLXDIR) re
	@make -C $(LIBDIR) re
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -c -I$(INCDIR) -I$(LIBDIR)$(INCDIR) -I$(MLXDIR)

clean:
	@make -C $(MLXDIR) clean
	@make -C $(LIBDIR) clean
	rm -rf $(OBJ)

fclean: clean
	@make -C $(LIBDIR) fclean
	rm -rf $(NAME)

re: fclean all
