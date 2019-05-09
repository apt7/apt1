#include<iostream>;
#include<conio.h>;
#include<graphics.h>
using namespace std;

///Rectangle

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

void floodFill(int x,int y,int interiorColor,int fillColor)
{
	if(getpixel(x,y) == interiorColor)
	{
		putpixel(x,y,fillColor);
		floodFill(x-1,y,interiorColor,fillColor);
		floodFill(x+1,y,interiorColor,fillColor);
		floodFill(x,y-1,interiorColor,fillColor);
		floodFill(x,y+1,interiorColor,fillColor);

	}
}


int main(){
int gd = DETECT , gm  , x1,y1,x2,y2 ,x , y;

//clrscr();

initgraph(&gd , &gm , "C:\\tc\\bgi");
drawline(160,340,470,160);
drawline(470,160,390,20);
drawline(390,20,80,200);
drawline(80,200,160,340);

//rectangle(275,180,275,180);
floodFill(270,110,0,15);


getch();
closegraph();
return 0;
}


/*
///Pentagon:

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
void floodFill(int x,int y,int interiorColor,int fillColor)
{
	if(getpixel(x,y) == interiorColor)
	{
		putpixel(x,y,fillColor);
		floodFill(x-1,y,interiorColor,fillColor);
		floodFill(x+1,y,interiorColor,fillColor);
		floodFill(x,y-1,interiorColor,fillColor);
		floodFill(x,y+1,interiorColor,fillColor);

	}
}


int main(){
int gd = DETECT , gm  , x1,y1,x2,y2 ,x , y;

//clrscr();

initgraph(&gd , &gm , "C:\\tc\\bgi");
drawline(10,90,40,120);
drawline(40,120,70,90);
drawline(70,90,50,40);
drawline(50,40,30,40);
drawline(30,40,10,90);

int arr[] = {10,90,40,120,40,120,70,90,70,90,50,40,30,40,10,90};
 drawpoly(5,arr);
	floodFill(40,110,0,15);



getch();
}


///Triangle

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

void floodFill(int x,int y,int interiorColor,int fillColor)
{
	if(getpixel(x,y) == interiorColor)
	{
		putpixel(x,y,fillColor);
		floodFill(x-1,y,interiorColor,fillColor);
		floodFill(x+1,y,interiorColor,fillColor);
		floodFill(x,y-1,interiorColor,fillColor);
		floodFill(x,y+1,interiorColor,fillColor);

	}
}


int main(){
int gd = DETECT , gm  , x1,y1,x2,y2 ,x , y;

//clrscr();

initgraph(&gd , &gm , "C:\\tc\\bgi");
drawline(20,100,70,30);
drawline(70,30,120,100);
drawline(20,100,120,100);

int arr[] = {20,100,70,30,70,30,120,100,20,100,120,100};
 drawpoly(3,arr);

	floodFill(40, 90 , 0, 15);


getch();
}
*/
