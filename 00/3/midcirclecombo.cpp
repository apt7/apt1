#include <iostream>
#include<graphics.h>
using namespace std;



    void circles(int x1,int y1,int r)
    {
        int xk, yk, xk_1, yk_1;
  float pk;
  pk = 1 - r;

  xk_1 = 0; yk_1 = r;
  while(xk_1<=yk_1){
    yk = yk_1;
    xk = xk_1;
    if(pk >= 0){
      yk_1 = yk-1;
    }
    xk_1 = xk_1 + 1;
    putpixel(x1+xk_1, y1+yk_1,RED);
    putpixel(x1+yk_1, y1+xk_1,RED);
    putpixel(x1+xk_1, y1-yk_1,RED);
    putpixel(x1+yk_1, y1-xk_1,RED);
    putpixel(x1-xk_1, y1+yk_1,RED);
    putpixel(x1-yk_1, y1+xk_1,RED);
    putpixel(x1-xk_1, y1-yk_1,RED);
    putpixel(x1-yk_1, y1-xk_1,RED);
    pk = pk + 2*(xk+1) + (yk_1*yk_1 - yk*yk) - (yk_1 - yk) +1;
  }


    }


int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    circles(250,250,100);
    circles(250,250,70);
    circles(250,250,50);

    getch();
  closegraph();
  return 0;
}

