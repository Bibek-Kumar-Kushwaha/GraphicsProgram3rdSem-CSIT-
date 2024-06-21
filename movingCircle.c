#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    int i, y = 100; // Starting y-coordinate for the circle

    initgraph(&gd, &gm, "");

    for (i = 0; i < 200; i++) {

        circle(100, y + i, 50); // Draw the circle at updated y-coordinate

    }

    getch();
    closegraph();
    return 0;
}
