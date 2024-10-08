#include "canvas.h"

#include <stdio.h>
#include <stdlib.h>

struct canvas
make_canvas(size_t width, size_t height)
{
    return (struct canvas){
        .pixels = malloc(sizeof(struct color) * width * height),
        .width = width,
        .height = height};
}

void set_pixel(struct canvas *canvas, int x, int y, struct color c)
{
    canvas->pixels[y * canvas->width + x] = c;
}

void rect(struct canvas *canvas, size_t start_x, size_t start_y, size_t width, size_t height, struct color color)
{
    for (size_t y = start_y; y != start_y + height; ++y)
    {
        for (size_t x = start_x; x != start_x + width; ++x)
        {
            set_pixel(canvas, x, y, color);
        }
    }
}

void print_canvas(FILE *file, struct canvas *canvas)
{
    fprintf(file, "P3 %zu %zu 255\n", canvas->width, canvas->height);
    for (size_t i = 0; i != canvas->width * canvas->height; ++i)
    {
        fprintf(file, "%d %d %d ", canvas->pixels[i].r, canvas->pixels[i].g, canvas->pixels[i].b);
    }
}
