//#include<conio.h>
#include<iostream>
#include<time.h>
#include<graphics.h>
#include<stdlib.h>
//#include<dos.h>
using namespace std;


void  boundary(int x,int y,int fillcolor,int boundarycolor){

        if((getpixel(x,y)!=boundarycolor)&&(getpixel(x,y)!=fillcolor)){

            putpixel(x,y,fillcolor);
            boundary((x+1),y,fillcolor,boundarycolor);
            boundary(x,(y+1),fillcolor,boundarycolor);
            boundary((x-1),y,fillcolor,boundarycolor);
            boundary(x,(y-1),fillcolor,boundarycolor);
            boundary((x+1),(y+1),fillcolor,boundarycolor);
            boundary((x-1),(y-1),fillcolor,boundarycolor);
            boundary((x-1),(y+1),fillcolor,boundarycolor);
            boundary((x+1),(y-1),fillcolor,boundarycolor);
        }
}

int main(){
    int x=150,y=150;
    int fillcolor=2;
    int boundarycolor=9;


int gd= DETECT,gm;
    initgraph(&gd,&gm,"C:\\Program Files(x86)\\CodeBlocks\\MinGW\\include");
    setcolor(9);
     rectangle(100,100,300,300);

    boundary(x,y,fillcolor,boundarycolor);

    closegraph();
    delay(1000);

return 0;


    }




