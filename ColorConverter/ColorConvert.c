#include <stdio.h>
#include <stdint.h>

int main(void) {
    unsigned int color;
    unsigned int red;
    unsigned int green;
    unsigned int blue;
    printf("Enter RGB565 value: ");
    scanf("%x", &color);
    red = ((((color >> 11) & 0x1F) * 527) + 23) >> 6;
    green = ((((color >> 5) & 0x3F) * 259) + 33) >> 6;
    blue = (((color & 0x1F) * 527) + 23) >> 6;
    printf("Red: %d\n", red);
    printf("Green: %d\n", green);
    printf("Blue: %d\n", blue);
    uint32_t rgbHex = red << 16 | green << 8 | blue;
    printf("Hex: %x\n", rgbHex);
    uint16_t rgb565 = ((red & 0xF8) << 8) | ((green & 0xFC) << 3) | (blue >> 3);
    printf("RGB565 value: %x", rgb565);
    return 0;
}
