//2D translation
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int x1,y1,x2,y2,tx,ty;

    printf("Enter the two line end points (x1, y1) and (x2, y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    printf("Line Before Translation : ");
    line(x1,y1,x2,y2);

    printf("Enter Translating co-ordinate : ");
    scanf("%d %d",&tx,&ty);

    x1 = x1 + tx;
    y1 = y1 + ty;
    x2 = x2 + tx;
    y2 = y2 + ty;

    printf("Line after Translation : ");
    line(x1,y1,x2,y2);

    getch();
    closegraph();
    return 0;
}
