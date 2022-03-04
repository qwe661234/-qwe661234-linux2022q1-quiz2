#include <stdio.h>
#include <stdint.h>

uint32_t average(uint32_t a, uint32_t b)
{
    return (a >> 1) + (b >> 1) + (a & b & 1);
}
int main(int argc, char** argv) {
    uint32_t a = 3, b = 5;
    printf("%u", average(a, b));
    return 0;
}