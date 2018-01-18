#include <libfx.h>

void draw_img(t_screen *screen)
{
    mlx_put_image_to_window(screen->mlx, screen->win, screen->pic, 0, 0);
    mlx_destroy_image(screen->mlx, screen->pic);
}
