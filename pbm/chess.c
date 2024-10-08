#include <stdio.h>
#define SIZE 800

int main()
{
    printf("P1 %u %u\n", SIZE, SIZE);
    for (size_t y = 0; y != SIZE; ++y)
    {
        for (size_t x = 0; x != SIZE; ++x)
        {
            printf("%zu ", (x / (SIZE / 8) + y / (SIZE / 8)) % 2);
        }
    }

    return 0;
}