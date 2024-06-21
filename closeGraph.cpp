//C program code of closegraph:
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
main()
{
int gd = DETECT, gm;

initgraph(&gd, &gm, "");

outtext("Press any key to close the graphics mode...");

getch();

closegraph();
return 0;
}
