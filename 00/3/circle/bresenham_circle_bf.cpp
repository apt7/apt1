#include <iostream>
#include<graphics.h>
using namespace std;

void drawCircle(int x,int y,int xc,int yc)
{
	putpixel(x+xc,y+yc,WHITE);
	putpixel(-x+xc,y+yc,WHITE);
	putpixel(x+xc, -y+yc,WHITE);
	putpixel(-x+xc, -y+yc, WHITE);
	putpixel(y+xc, x+yc, WHITE);
	putpixel(y+xc, -x+yc, WHITE);
	putpixel(-y+xc, x+yc, WHITE);
	putpixel(-y+xc, -x+yc, WHITE);
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


 void boundaryFill(int x, int y, int fill_color, int boundary_color)
{
	if(getpixel(x, y) != boundary_color && getpixel(x, y) != 		fill_color)
	{
		putpixel(x, y, fill_color);
		boundaryFill(x + 1, y, fill_color, boundary_color);
        	boundaryFill(x, y + 1, fill_color, boundary_color);
        	boundaryFill(x - 1, y, fill_color, boundary_color);
       		boundaryFill(x, y - 1, fill_color, boundary_color);
       		/*boundaryFill(x - 1, y - 1, fill_color, boundary_color);
        	boundaryFill(x - 1, y + 1, fill_color, boundary_color);
        	boundaryFill(x + 1, y - 1, fill_color, boundary_color);
        	boundaryFill(x + 1, y + 1, fill_color, boundary_color);*/

	}
}







int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

    circles(250,250,100);
    //circles(250,250,75);
    //circles(250,250,50);

 boundaryFill(200,200,15,15);
   getch();
	closegraph();
    return 0;
}
