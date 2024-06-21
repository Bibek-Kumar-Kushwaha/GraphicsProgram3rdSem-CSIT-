//C program to show 3D Translation in graphics:
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void trans();
int maxx,maxy,midx,midy;
int main()
{
int ch;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
trans();
}
void trans()
{
int x,y,z,x1,x2,y1,y2;
midx=100;
midy=250;
bar3d(midx+50,midy-100,midx+100,midy-50,20,1);
printf("Enter translation factor(x and y):");
scanf("%d%d",&x,&y);
printf("After translation:");
bar3d(midx+x+50,midy-(y+100),midx+x+100,midy-(y+50),20,1);
getch();

}
