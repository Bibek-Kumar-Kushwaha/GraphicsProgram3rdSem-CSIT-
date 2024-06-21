//Write a C program for 2D Rotation in Graphics
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


    long x1 = 100, y1 = 100, x2 = 200, y2 = 200;
    double d1, xt, yt;

    printf("\nEnter angle of rotation: ");
    scanf("%lf", &d1); // Asking value in degree
    d1 = (d1 * 3.14) / 180.0; // Convert degree to radians

    xt = x1 + ((x2 - x1) * cos(d1) - (y2 - y1) * sin(d1));
    yt = y1 + ((x2 - x1) * sin(d1) + (y2 - y1) * cos(d1));

    line(x1, y1, x2, y2);

    printf("\nLINE AFTER ROTATION");
    line(x1, y1, (int)xt, (int)yt);
    getch();

    closegraph();
    return 0;
}

