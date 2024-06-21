//C program code of floodfill:
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd = DETECT, gm;

initgraph(&gd, &gm, "");
setcolor(RED);
circle(100,100,RED);
floodfill(100,100,RED);

getch();
closegraph();
return 0;
}

