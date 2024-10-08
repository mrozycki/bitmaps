#include <stdio.h>
#include <stdlib.h>

struct color
{
    int r, g, b;
};

struct canvas
{
    struct color *pixels;
    size_t width, height;
};

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

void print_canvas(struct canvas *canvas)
{
    printf("P3 %zu %zu 255\n", canvas->width, canvas->height);
    for (size_t i = 0; i != canvas->width * canvas->height; ++i)
    {
        printf("%d %d %d ", canvas->pixels[i].r, canvas->pixels[i].g, canvas->pixels[i].b);
    }
}

int main()
{
    size_t width = 800, height = 800;
    struct canvas artwork = make_canvas(width, height);
    rect(&artwork, 0, 0, width, height, (struct color){.r = 255, .g = 255, .b = 255});
    rect(&artwork, width / 4, height / 4, width / 2, height / 2, (struct color){.r = 0, .g = 0, .b = 0});
    print_canvas(&artwork);

    return 0;
}