//C program code of setbkcolor:
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

outtext("Press any key to change the background colour to GREEN");
setbkcolor(GREEN);


getch();
closegraph();
return 0;
}



