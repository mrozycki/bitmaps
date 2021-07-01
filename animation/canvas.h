#include <iostream>
#include <vector>

struct color {
    int r, g, b;
};

class canvas {
    std::size_t width_, height_;
    std::vector<color> pixels_;

public:
    canvas(std::size_t width, std::size_t height, color background);

    std::size_t width() const { return width_; }
    std::size_t height() const { return height_; }

    void set_pixel(int x, int y, color c);

    friend std::ostream& operator<<(std::ostream&, canvas const&);
};

void rect(canvas& canvas, int start_x, int start_y, int width, int height, color color);