#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
int gd=DETECT,gm;
//clrscr();
initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(3);
line(100,200,300,200);

line(100,400,300,400);

line(100,400,100,200);

line(300,400,300,200);

line(300,200,500,200);

line(300,400,500,400);

line(500,200,500,400);

line(170,250,270,250);

line(170,200,270,200);

line(170,250,170,400);

line(270,250,270,400);

line(200,50,400,50);

line(400,50,500,200);

line(300,200,200,50);

line(100,200,200,50);
getch();
closegraph();
}
