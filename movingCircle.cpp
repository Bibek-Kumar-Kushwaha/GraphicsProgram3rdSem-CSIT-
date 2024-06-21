//Write a C program for moving circle in Graphics
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

int main()
{
int gd=DETECT,gm;
int i;
initgraph(&gd,&gm,"");
for(i=0;i<200;i++)
{
circle(100,100+i,50);
}
getch();
closegraph();
}
