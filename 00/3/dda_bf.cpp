///Pentagon
#include<iostream>;
#include<conio.h>;
#include<graphics.h>
using namespace std;

void drawline(int x1,int y1 , int x2,int y2 )
{
    int dx , dy , m ,s;
    float xi , yi , x, y;
    dx = x2-x1;
    dy = y2-y1;

    if(abs(dx)> abs(dy)){
        s = abs(dx);
    }else{
    s = abs(dy);
    }

    xi = dx/(float) s;
    yi = dy/(float) s;

    x = x1;
    y = y1;

    putpixel(x1 , y1, WHITE);

    for(m = 0 ; m< s ; m++){
        x = x + xi;
        y = y + yi;
        putpixel(x,y,WHITE);
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

	}
}

int main(){
int gd = DETECT , gm  , x1,y1,x2,y2,xy;
initgraph(&gd , &gm , "C:\\tc\\bgi");

drawline(10,90,40,120);
drawline(40,120,70,90);
drawline(70,90,50,40);
drawline(50,40,30,40);
drawline(30,40,10,90);

int arr[]={10,90,40,120,40,120,70,90,70,90,50,40,50,40,30,40,30,40,10,90};
drawpoly(5,arr);
boundaryFill(40,110,15,15);
getch();
closegraph();
return 0;

///Rectangle
#include<iostream>;
#include<conio.h>;
#include<graphics.h>
using namespace std;

void drawline(int x1,int y1 , int x2,int y2 )
{
    int dx , dy , m ,s;
    float xi , yi , x, y;
    dx = x2-x1;
    dy = y2-y1;

    if(abs(dx)> abs(dy)){
        s = abs(dx);
    }else{
    s = abs(dy);
    }

    xi = dx/(float) s;
    yi = dy/(float) s;

    x = x1;
    y = y1;

    putpixel(x1 , y1, WHITE);

    for(m = 0 ; m< s ; m++){
        x = x + xi;
        y = y + yi;
        putpixel(x,y,WHITE);
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

	}
}

int main(){
int gd = DETECT , gm  , x1,y1,x2,y2,xy;
initgraph(&gd , &gm , "C:\\tc\\bgi");
drawline(160,340,470,160);
drawline(470,160,390,20);
drawline(390,20,80,200);
drawline(80,200,160,340);

int arr[] = {160,340,470,160,470,160,390,20,390,20,80,200,80,200,160,340};
 drawpoly(4,arr);
	boundaryFill(275, 105, 15, 15);
	getch();
closegraph();
return 0;

///Triangle
#include<iostream>;
#include<conio.h>;
#include<graphics.h>
using namespace std;

void drawline(int x1,int y1 , int x2,int y2 )
{
    int dx , dy , m ,s;
    float xi , yi , x, y;
    dx = x2-x1;
    dy = y2-y1;

    if(abs(dx)> abs(dy)){
        s = abs(dx);
    }else{
    s = abs(dy);
    }

    xi = dx/(float) s;
    yi = dy/(float) s;

    x = x1;
    y = y1;

    putpixel(x1 , y1, WHITE);

    for(m = 0 ; m< s ; m++){
        x = x + xi;
        y = y + yi;
        putpixel(x,y,WHITE);
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

	}
}

int main(){
int gd = DETECT , gm  , x1,y1,x2,y2,xy;
initgraph(&gd , &gm , "C:\\tc\\bgi");
drawline(20,100,70,30);
drawline(70,30,120,100);
drawline(20,100,120,100);

int arr[]={20,100,70,30,70,30,120,100,20,100,120,100};
drawpoly(3,arr);
boundaryFill(40,90,15,15);
getch();
closegraph();
return 0;
}
