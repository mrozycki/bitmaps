#include <complex>
#include <iostream>

int main() {
    constexpr auto scale = 200.0;
    constexpr auto width = 700, height = 400;
    std::cout << "P1 " << width << " " << height << "\n";
    for (auto y = 0; y != height; ++y) {
        for (auto x = 0; x != width; ++x) {
            std::complex<double> const c0{x / scale - 2.5, y / scale - 1.0};
            constexpr auto max_iteration = 255;

            std::complex<double> z(0.0, 0.0);
            auto iteration = 0;
            while (std::abs(z) < 2 && iteration != max_iteration) {
                z = z*z + c0;
                ++iteration;
            }
            std::cout << (iteration == max_iteration) << " ";
        }
    }
}