#include <libfx.h>

void init_img(t_screen *screen)
{
    screen->pic = mlx_new_image(screen->mlx, screen->win_width, screen->win_height);
    screen->canvas = (int *)mlx_get_data_addr(screen->pic,
        &screen->bits,
        &screen->s_line,
        &screen->endian);
}
