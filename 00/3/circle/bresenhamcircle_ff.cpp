#include <iostream>
#include<graphics.h>
using namespace std;

void drawCircle(int x,int y,int xc,int yc)
{
	putpixel(x+xc,y+yc,YELLOW);
	putpixel(-x+xc,y+yc,YELLOW);
	putpixel(x+xc, -y+yc,YELLOW);
	putpixel(-x+xc, -y+yc, YELLOW);
	putpixel(y+xc, x+yc, YELLOW);
	putpixel(y+xc, -x+yc, YELLOW);
	putpixel(-y+xc, x+yc, YELLOW);
	putpixel(-y+xc, -x+yc, YELLOW);
}

void circles(int xc,int yc, int r)
{
int  x, y, d;
    d = 3 - 2*r;
	x=0; y = r;
	drawCircle( x, y, xc, yc);
	while(x < y)
	{
		if(d < 0)
		{
			d = d + (4*x) + 6;
			drawCircle(x=x+1,y,xc,yc);
		}
		else
		{
			d = d + (4*(x-y)) + 10;
			drawCircle(x=x+1,y=y-1,xc,yc);
		}
	}



}


 void floodFill(int x,int y,int interiorColor,int fillColor)
{
	if(getpixel(x,y) == interiorColor)
	{
		putpixel(x,y,fillColor);
		floodFill(x-1,y,interiorColor,fillColor);
		floodFill(x+1,y,interiorColor,fillColor);
		floodFill(x,y-1,interiorColor,fillColor);
		floodFill(x,y+1,interiorColor,fillColor);
		/*floodFill(x-1,y+1,interiorColor,fillColor);
		floodFill(x+1,y+1,interiorColor,fillColor);
		floodFill(x+1,y-1,interiorColor,fillColor);
		floodFill(x-1,y-1,interiorColor,fillColor);*/
	}
}








int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

    circles(250,250,100);
    //circles(250,250,75);
    //circles(250,250,50);

floodFill(200,200,0,15);
   getch();
	closegraph();
    return 0;
}
