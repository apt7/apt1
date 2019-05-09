///Rectangle
#include <iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void drawline(int xc,int yc,int xe,int ye)
{
    float step,x,y,xi,yi,k;
    float dx=xe-xc;
float dy=ye-yc;
if(abs(dx)>=abs(dy))
{
	step=abs(dx);
}
else
{
	step=abs(dy);
}
xi=dx/step;
yi=dy/step;
x=xc;
y=yc;
for(k=1;k<=step;k++)
{
	x=x+xi;
	y=y+yi;
	putpixel(x,y,WHITE);
}

}

void floodFill(int x,int y,int interiorColor,int fillColor)
{
	if(getpixel(x,y) == interiorColor)
	{
		putpixel(x,y,fillColor);
		floodFill(x+1,y,interiorColor,fillColor);
		floodFill(x-1,y,interiorColor,fillColor);
		floodFill(x,y-1,interiorColor,fillColor);
		floodFill(x,y+1,interiorColor,fillColor);
	}
}

int main()
{
initwindow(1000,1000);
    int gd = DETECT,gm , x , y , xc , yc , xe , ye , xi , yi;
    initwindow(800,800);
   initgraph(&gd , &gm , "C:\\tc\\bgi");
    drawline(80,40,160,40);
    drawline(160,40,180,120);
    drawline(180,120,160,160);
    drawline(160,160,80,160);
    drawline(80 ,160 ,20 ,120);
    drawline(20,120,80,40);


 //int arr[] = {160,340,470,160,470,160,390,20,390,20,80,200,80,200,160,340};
 //drawpoly(4,arr);


	floodFill(100, 100, 0, 15);



    getch();
    //closegraph();
    //return 0;
}

