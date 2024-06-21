//C program code of outtext:
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd = DETECT, gm;

initgraph(&gd, &gm, "");

outtext(" TO display text at a particular position on the screen use outtextxy");

getch();
closegraph();
return 0;
}
