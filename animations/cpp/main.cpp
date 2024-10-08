#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>

#include "canvas.h"

std::string create_filename(std::string const& prefix, int i, std::string const& suffix) {
    std::stringstream s;
    s << prefix << std::setw(4) << std::setfill('0') << i << suffix;
    return s.str();
}

int main() {
    constexpr auto width = 400, height = 400, frames = 100;
    
    canvas artwork(width, height, {255, 255, 255});
    for (auto frame = 0; frame < frames; ++frame) {
        rect(artwork, 0, 0, width, height, {255, 255, 255});
        rect(artwork, 
            (width + height/4) / frames * frame - height/4, 3*height/8, 
            height/4, height/4, 
            {0, 0, 0});

        auto filename = create_filename("render/frame_", frame, ".ppm");
        std::ofstream out(filename);
        std::cout << filename << "\n";
        out << artwork;
    }
}