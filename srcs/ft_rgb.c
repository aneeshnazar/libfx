#include <libfx.h>

t_color			ft_rgb(int r, int g, int b)
{
    return (r << 16 | g << 8 | b);
}
