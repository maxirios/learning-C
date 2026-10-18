#include <stdio.h>
#include <stdint.h>

int main(void) {
    printf("uint8_t : %zu byte(s)\n", sizeof(uint8_t));
    printf("uint16_t: %zu byte(s)\n", sizeof(uint16_t));
    printf("uint32_t: %zu byte(s)\n", sizeof(uint32_t));
    printf("int     : %zu byte(s)\n", sizeof(int));
    printf("float   : %zu byte(s)\n", sizeof(float));

    uint16_t x = 255;
    x = x + 1;
    printf("255 + 1 en uint16_t = %u\n", x);

    uint32_t y = 0xDEADBEEF;
    printf("y = %u (decimal), 0x%X (hex)\n", y, y);

    return 0;
}
