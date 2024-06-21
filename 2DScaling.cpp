// Write a C program for 2D Scaling Graphics:
//Program for 2D Scaling:
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int graphdriver=DETECT,graphmode;
int i;
int x2,y2,x1,y1,x,y;
printf("Enter the 2 line end points:");
printf("x1,y1,x2,y2");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&graphdriver,&graphmode,"C:\\turboc3\\BGI");
line(x1,y1,x2,y2);
getch();
printf("Enter scaling co-ordinates ");
printf("x,y");
scanf("%d%d",&x,&y);
x1=(x1*x);
y1=(y1*y);
x2=(x2*x);
y2=(y2*y);
printf("Line after scaling");
line(x1,y1,x2,y2);
getch();
closegraph();
}
