#include <libfx.h>

void	place_at(t_screen *screen, int x, int y, t_color color)
{
	int	pos;

	pos = x + (y * screen->s_line / 4);
	if (pos >= 0 && pos < screen->win_height * screen->win_width)
		if ((x >= 0 && x < screen->win_width) && (y >= 0 && y < screen->win_height))
			screen->canvas[pos] = color;
}
