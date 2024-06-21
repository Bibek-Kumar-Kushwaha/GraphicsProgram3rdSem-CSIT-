//DDA program
#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main() {
    float x, y, x1, y1, x2, y2, dx, dy, step;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    printf("Enter the value of x1 and y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the value of x2 and y2: ");
    scanf("%f %f", &x2, &y2);

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if (dx >=dy) {
        step = dx;
    } else {
        step = dy;
    }

    dx = dx/ step;
    dy = dy/ step;

    x = x1;
    y = y1;

    // Draw line using DDA algorithm
    for (int i = 0; i <= step; i++) {
        putpixel(x,y, WHITE);
        x += dx;
        y += dy;
    }

    delay(100000);
    closegraph();
    return 0;
}

