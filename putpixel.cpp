//C program code of putpixel:
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd = DETECT, gm;

initgraph(&gd, &gm, "");

putpixel(25,25,RED);
getch();
closegraph();
return 0;
}
