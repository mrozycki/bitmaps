#include <cmath>
#include <iostream>

constexpr auto PI = 3.1415926535;

int main() {
    constexpr auto width = 800, height = 800;
    std::cout << "P3 " << width << " " << height << " 255\n";
    for (auto y = 0; y != height; ++y) {
        for (auto x = 0; x != width; ++x) {
            auto r = static_cast<int>(255 * (std::cos(-(1.0 * y / height + 0.66) * 2 * PI) + 1) / 2);
            auto g = static_cast<int>(255 * (std::cos(-(1.0 * y / height + 0.33) * 2 * PI) + 1) / 2);
            auto b = static_cast<int>(255 * (std::cos(-(1.0 * y / height + 0.00) * 2 * PI) + 1) / 2);
            std::cout << r << " " << g << " " << b << " ";
        }
        std::cout << "\n";
    }
}