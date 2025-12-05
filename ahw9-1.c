#include <stdio.h>

int main() {
    int r, g, b;

    // Basic color table: Black, Red, Green, Blue, White
    int color[5][3] = {
        {0,   0,   0},      // Black
        {255, 0,   0},      // Red
        {0,   255, 0},      // Green
        {0,   0,   255},    // Blue
        {255, 255, 255}     // White
    };

    char *name[5] = {"Black", "Red", "Green", "Blue", "White"};

    printf("Enter R, G, B: ");
    scanf("%d %d %d", &r, &g, &b);

    int minIndex = 0;
    long minDist = 999999999;

    for (int i = 0; i < 5; i++) {
        long dr = r - color[i][0];
        long dg = g - color[i][1];
        long db = b - color[i][2];

        long dist = dr*dr + dg*dg + db*db;   // squared distance (no sqrt)

        if (dist < minDist) {
            minDist = dist;
            minIndex = i;
        }
    }

    printf("The nearest color is %s\n", name[minIndex]);

    return 0;
}


