#include <stdio.h>

// Function to convert one decimal (0–255) to 2-digit hex (manual way)
void decimalToHex(int value, char *first, char *second) {
    float temp = value / 16.0;

    // First hex digit = integer part
    int digit1 = (int)temp;

    // Second digit = fractional part * 16
    float fractional = temp - digit1;
    int digit2 = (int)(fractional * 16);

    // Convert 0–15 to hexadecimal characters
    *first  = (digit1 < 10) ? digit1 + '0' : (digit1 - 10) + 'A';
    *second = (digit2 < 10) ? digit2 + '0' : (digit2 - 10) + 'A';
}

int main() {
    int r, g, b;
    char r1, r2, g1, g2, b1, b2;

    printf("Enter R, G, B value\n");
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    // Convert each of R, G, B manually
    decimalToHex(r, &r1, &r2);
    decimalToHex(g, &g1, &g2);
    decimalToHex(b, &b1, &b2);

    printf("\nThe hex code is #%c%c%c%c%c%c\n", r1, r2, g1, g2, b1, b2);

    return 0;
}


