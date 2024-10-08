#ifndef CANVAS_H
#define CANVAS_H

#include <stdio.h>

struct color
{
    int r, g, b;
};

struct canvas
{
    struct color *pixels;
    size_t width, height;
};

struct canvas make_canvas(size_t width, size_t height);

void set_pixel(struct canvas *canvas, int x, int y, struct color c);

void rect(struct canvas *canvas, size_t start_x, size_t start_y, size_t width, size_t height, struct color color);

void print_canvas(FILE *file, struct canvas *canvas);

#endif