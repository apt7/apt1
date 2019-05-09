#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main(){
    int gd=DETECT, gm, res;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    res = graphresult();
    if(res != 0){
        cout<<"Initialization failed.";
    }
    int xwmin, xwmax, ywmin, ywmax;
    int xvmin, xvmax, yvmin, yvmax;
    int x0, x1, y0, y1;
    float sx, sy;
    float xv0, xv1, yv0, yv1;
    cout<<"Enter xmin window: ";
    cin>>xwmin;
    cout<<"Enter ymin window: ";
    cin>>ywmin;
    cout<<"Enter xmax window: ";
    cin>>xwmax;
    cout<<"Enter ymax window: ";
    cin>>ywmax;

    cout<<"Enter xmin viewport: ";
    cin>>xvmin;
    cout<<"Enter ymin viewport: ";
    cin>>yvmin;
    cout<<"Enter xmax viewport: ";
    cin>>xvmax;
    cout<<"Enter ymax viewport: ";
    cin>>yvmax;

    cout<<"Enter x0: ";
    cin>>x0;
    cout<<"Enter y0: ";
    cin>>y0;
    cout<<"Enter x1: ";
    cin>>x1;
    cout<<"Enter y1: ";
    cin>>y1;

    rectangle(xwmin, ywmin, xwmax, ywmax);
    line(x0, y0, x1, y1);

    getch();
    closegraph();

    sx = -1*(xvmax - xvmin)/(xwmin - xwmax);
    sy = -1*(yvmax - yvmin)/(ywmin - ywmax);
    xv0 = xvmin + (x0 - xwmin)*sx;
    yv0 = yvmin + (y0 - ywmin)*sy;
    xv1 = xvmin + (x1 - xwmin)*sx;
    yv1 = yvmin + (y1 - ywmin)*sy;

    cout<<xv0<<"\t"<<yv0<<"\t"<<xv1<<"\t"<<yv1<<"\t";

    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    res = graphresult();
    if(res != 0){
        cout<<"Initialization failed.";
    }
    rectangle(xvmin, yvmin, xvmax, yvmax);
    line(xv0, yv0, xv1, yv1);
    getch();
    closegraph();
    return 0;
}
