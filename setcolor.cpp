//C program code of outtext:
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd = DETECT, gm;

initgraph(&gd, &gm, "");

circle(100,100,50);
setcolor(RED);
circle(200,200,50);

getch();
closegraph();
return 0;
}


