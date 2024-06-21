//C program code of outtext:
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd = DETECT, gm;

initgraph(&gd, &gm, "");

rectangle(100,100,200,200);

getch();
closegraph();
return 0;
}

