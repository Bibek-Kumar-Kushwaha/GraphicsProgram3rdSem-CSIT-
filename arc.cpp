//C program code of ARC:
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd = DETECT, gm;

initgraph(&gd, &gm, "");

arc(100,100,0,135,50);

getch();
closegraph();
return 0;
}
