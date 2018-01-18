#include <libfx.h>

void	place_at(t_draw *draw, int x, int y, t_color color)
{
	int	pos;

	pos = x + (y * draw->s_line / 4);
	if (pos >= 0 && pos < draw->win_height * draw->win_width)
		if ((x >= 0 && x < draw->win_width) && (y >= 0 && y < draw->win_height))
			draw->pic[pos] = color;
}