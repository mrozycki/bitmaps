#include <iostream>

int main() {
    constexpr auto size = 800;
    std::cout << "P1 " << size << " " << size << "\n";
    for (auto y = 0; y != size; ++y) {
        for (auto x = 0; x != size; ++x) {
            std::cout << ((x/(size/8) + y/(size/8)) % 2) << " ";
        }
    }
}