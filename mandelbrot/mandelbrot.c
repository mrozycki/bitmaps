#include <complex.h>
#include <stdio.h>

int main()
{
    double scale = 200.0;
    size_t width = 700, height = 400;
    printf("P1 %zu %zu\n", width, height);
    for (size_t y = 0; y != height; ++y)
    {
        for (size_t x = 0; x != width; ++x)
        {
            double complex c0 = x / scale - 2.5 + (y / scale - 1.0) * I;
            size_t max_iteration = 255;

            double complex z = 0.0;
            size_t iteration = 0;
            while (cabs(z) < 2.0 && iteration != max_iteration)
            {
                z = z * z + c0;
                ++iteration;
            }
            printf("%d ", iteration == max_iteration);
        }
    }

    return 0;
}