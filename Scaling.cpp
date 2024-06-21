//2D Scaling
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
 {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1, y1, x2, y2, sx, sy;

    printf("Enter the two line end points (x1, y1) and (x2, y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    printf("Line Before  : ");
    line(x1,y1,x2,y2);

    printf("Enter Scaling factors for x and y: ");
    scanf("%d %d", &sx, &sy);

    x1 = x1 * sx;
    y1 = y1 * sy;
    x2 = x2 * sx;
    y2 = y2 * sy;

    printf("Line after  : ");
    line(x1,y1,x2,y2);

    getch();
    closegraph();
    return 0;
}

