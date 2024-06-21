// Program for 2D Refection:
#include <conio.h>
#include <graphics.h>
#include <stdio.h>

int main() {
    int gm, gd = DETECT;
    int x1 = 100, x2 = 100, x3 = 200, y1 = 100, y2 = 200, y3 = 100;

    initgraph(&gd, &gm, "");

    // Draw the axes
    line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);

    // Draw the object initially in the 2nd quadrant

    printf("Before Reflection Object in 2nd Quadrant\n");
    setcolor(15);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Reflect the object along the origin (4th quadrant)
    printf("\nAfter Reflection\n");
    setcolor(15);
    line(getmaxx() - x1, getmaxy() - y1, getmaxx() - x2, getmaxy() - y2);
    line(getmaxx() - x2, getmaxy() - y2, getmaxx() - x3, getmaxy() - y3);
    line(getmaxx() - x3, getmaxy() - y3, getmaxx() - x1, getmaxy() - y1);

    getch();
    closegraph();
    return 0;
}

