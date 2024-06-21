#include <graphics.h>
#include<dos.h>
int main() {
    // Initialize the graphics mode and window at position (100, 100)
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\BGI");
    initwindow(640, 480, "Circle Example");

    // Set color to RED
    setcolor(WHITE);

    // Draw a circle with center at (250, 250) and radius 100
    circle(250, 250, 100);
    line(250,250,500,500);
    delay(1000);

    // Wait for a key press
    getch();

    // Close the graphics window
    closegraph();

    return 0;
}
