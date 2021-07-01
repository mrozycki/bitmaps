#include "canvas.h"

canvas::canvas(std::size_t width, std::size_t height, color background)
    : width_(width)
    , height_(height)
    , pixels_(width * height, background) {}

void canvas::set_pixel(int x, int y, color c) {
    pixels_[y * width_ + x] = c;
}

std::ostream& operator<<(std::ostream& out, canvas const& canvas) {
    out << "P3 " << canvas.width_ << " " << canvas.height_ << " 255\n";
    for (auto pixel : canvas.pixels_) {
        out << pixel.r << " " << pixel.g << " " << pixel.b << " ";
    }
    return out;
}

void rect(canvas& canvas, int start_x, int start_y, int width, int height, color color) {
    int end_x = std::min(start_x + width, static_cast<int>(canvas.width()));
    int end_y = std::min(start_y + height, static_cast<int>(canvas.height()));
    start_x = std::max(start_x, 0);
    start_y = std::max(start_y, 0);
    for (auto y = start_y; y != end_y; ++y) {
        for (auto x = start_x; x != end_x; ++x) {
            canvas.set_pixel(x, y, color);
        }
    }
}
