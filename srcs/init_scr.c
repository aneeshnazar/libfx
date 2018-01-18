#include <libfx.h>

t_screen		init_scr(int win_width, int win_height)
{
    t_screen    scr;

    scr.win_width = win_width;
    scr.win_height = win_height;
    scr.mlx = mlx_init();
    scr.win = mlx_new_window(scr.mlx, scr.win_width, scr.win_height, "Libfx");
    return (scr);
}
