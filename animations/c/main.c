#include <stdio.h>

#include "canvas.h"

int main()
{
    size_t width = 400, height = 400, frames = 100;

    struct canvas artwork = make_canvas(width, height);
    for (size_t frame = 0; frame < frames; ++frame)
    {
        rect(&artwork, 0, 0, width, height, (struct color){.r = 255, .g = 255, .b = 255});
        rect(&artwork,
             (width + height / 4) / frames * frame - height / 4, 3 * height / 8,
             height / 4, height / 4,
             (struct color){.r = 0, .g = 0, .b = 0});

        char filename[21];
        sprintf(filename, "render/frame_%03zu.ppm", frame);
        FILE *file = fopen(filename, "w");
        printf("%s\n", filename);
        print_canvas(file, &artwork);
    }

    return 0;
}