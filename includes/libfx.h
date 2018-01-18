#ifndef LIBFX_H
# define LIBFX_H
# include <libft.h>
# include <mlx.h>
# include <math.h>
# define RANGE_CHANGE (x, a, b, min, max) (((b - a) * (x - min)/(max - min)) + a)

typedef struct	s_screen
{
	void		*mlx;
	void		*win;
	void		*pic;
	int			bits;
	int			s_line;
	int			endian;
	int			*canvas;
	int			win_height;
	int			win_width;
}				t_screen;

typedef struct  s_coord {
    double      x;
    double      y;
}               t_coord;

typedef unsigned int	t_color;

t_screen		init_scr(int win_width, int win_height);
void			place_at(t_screen *screen, int x, int y, t_color color);
t_color			ft_rgb(int r, int g, int b);
void			init_img(t_screen *screen);
void			draw_img(t_screen *screen);
void			screen_img(t_screen *screen);
t_coord     	init_coord(double x, double y);


#endif
