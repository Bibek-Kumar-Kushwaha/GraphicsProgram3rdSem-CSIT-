//C program code of outtext:
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd = DETECT, gm;

initgraph(&gd, &gm, "");

ellipse(100,100,0,360,50,25);

getch();
closegraph();
return 0;
}

