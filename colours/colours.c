#include <math.h>
#include <stdio.h>

#define PI 3.1415926535
#define SIZE 800

int main()
{
    printf("P3 %d %d 255\n", SIZE, SIZE);
    for (size_t y = 0; y != SIZE; ++y)
    {
        for (size_t x = 0; x != SIZE; ++x)
        {
            int r = 255 * (cos(-(1.0 * y / SIZE + 0.66) * 2 * PI) + 1) / 2;
            int g = 255 * (cos(-(1.0 * y / SIZE + 0.33) * 2 * PI) + 1) / 2;
            int b = 255 * (cos(-(1.0 * y / SIZE + 0.00) * 2 * PI) + 1) / 2;
            printf("%d %d %d ", r, g, b);
        }
        printf("\n");
    }

    return 0;
}