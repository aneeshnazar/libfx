#ifndef LIBFX_H
# define LIBFX_H
# include <libft.h>
# include <mlx.h>
# include <math.h>

typedef struct	s_draw
{
	void		*mlx;
	void		*mlx;
	void		*img;
	int			bits;
	int			s_line;
	int			endian;
	int			*pic;
	int			win_height;
	int			win_width;
}				t_draw;

typedef unsigned int	t_color;

void			place_at(t_draw *draw, int x, int y, t_color color);
t_color			ft_rgb(int r, int g, int b);
int				init_img(t_draw *draw);
void			draw_img(t_draw *draw);


#endif