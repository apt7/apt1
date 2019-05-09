#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main(){
  int gd=DETECT, gm, res;
  float x1, x2, y1, y2, m;
  int pk, xk_1, yk_1, xk, yk;
  initgraph(&gd,&gm,"C:\\turboC3\\BGI");
  //res = graphresult();
  //if(res != 0){
   // cout<<"Initialization failed.";

  cout<<"Enter x1 coord: ";
  cin>>x1;
  cout<<"Enter y1 coord: ";
  cin>>y1;
  cout<<"Enter x2 coord: ";
  cin>>x2;
  cout<<"Enter y2 coord: ";
  cin>>y2;
  m =  (y1 - y2)/(x1 - x2);
cout<<"SLOPE :: "<<m<<endl;
  if(m < 1){

    xk_1 = x1;
    yk_1 = y1;
    putpixel(xk_1, yk_1, RED);
    pk = 2*(y2-y1) - (x2-x1);
    while(xk_1 <= x2){
      xk_1 = xk_1 + 1;
      yk = yk_1;
      if(pk>=0){
        yk_1 = yk + 1;
      }
      putpixel(xk_1, yk_1, RED);
      pk = pk + 2*(y2 - y1) - 2*(x2 - x1)*(yk_1 - yk);
    }

  }else if(m > 1){
    xk_1 = x1; yk_1 = y1;
    putpixel(xk_1, yk_1, BLUE);
    pk = 2*(x2-x1) - (y2-y1);
    while(yk_1 <= y2){
      yk_1 = yk_1 + 1;
      xk = xk_1;
      if(pk>=0){
        xk_1 = xk + 1;
      }
      putpixel(xk_1, yk_1, BLUE);
      pk = pk + 2*(x2 - x1) - 2*(y2 - y1)*(xk_1 - xk);
    }
  }

  getch();
  closegraph();
  return 0;
}
