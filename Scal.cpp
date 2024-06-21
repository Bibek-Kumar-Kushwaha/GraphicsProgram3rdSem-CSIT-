//2D transformation
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>

int main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,sx,sy;
printf("enter two line end points:");
printf("x1,y1,x2,y2");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
line(x1,y1,x2,y2);
printf("enter scaling co-ordinates:");
printf("sx,sy");
scanf("%d%d",&sx,&sy);
x1=x1*sx;
y1=y1*sy;
x2=x2*sx;
y2=y2*sy;
printf("line after scaling:");
line(x1,y1,x2,y2);
getch();
closegraph();
getch();
}
