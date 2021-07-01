#include <iostream>
#include <vector>

struct color {
    int r, g, b;
};

class canvas {
    std::size_t width_, height_;
    std::vector<color> pixels_;

public:
    canvas(std::size_t width, std::size_t height, color background)
        : width_(width)
        , height_(height)
        , pixels_(width * height, background) {}

    void set_pixel(int x, int y, color c) {
        pixels_[y * width_ + x] = c;
    }

    friend std::ostream& operator<<(std::ostream&, canvas const&);
};

void rect(canvas& canvas, int start_x, int start_y, int width, int height, color color) {
    for (auto y = start_y; y != start_y + height; ++y) {
        for (auto x = start_x; x != start_x + width; ++x) {
            canvas.set_pixel(x, y, color);
        }
    }
}

std::ostream& operator<<(std::ostream& out, canvas const& canvas) {
    out << "P3 " << canvas.width_ << " " << canvas.height_ << " 255\n";
    for (auto pixel : canvas.pixels_) {
        out << pixel.r << " " << pixel.g << " " << pixel.b << " ";
    }
    return out;
}

int main() {
    constexpr auto width = 800, height = 800;
    canvas artwork(width, height, {255, 255, 255});
    rect(artwork, width/4, height/4, width/2, height/2, {0, 0, 0});
    std::cout << artwork;
}