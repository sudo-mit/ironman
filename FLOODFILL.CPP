
#include<iostream>
#include<time.h>
#include<graphics.h>
#include<stdlib.h>

using namespace std;


void  flood(int x,int y,int fillcolor,int oldcolor){
        int color=getpixel(x,y);
        if(getpixel(x,y)==oldcolor){

            putpixel(x,y,fillcolor);
            flood((x+1),y,fillcolor,oldcolor);
            flood(x,(y+1),fillcolor,oldcolor);
            flood((x-1),y,fillcolor,oldcolor);
            flood(x,(y-1),fillcolor,oldcolor);
            flood((x+1),(y+1),fillcolor,oldcolor);
            flood((x-1),(y-1),fillcolor,oldcolor);
            flood((x-1),(y+1),fillcolor,oldcolor);
            flood((x+1),(y-1),fillcolor,oldcolor);
            }



}

int main(){
    int x=150,y=150;



int gd= DETECT,gm;
    initgraph(&gd,&gm,"C:\\Program Files(x86)\\CodeBlocks\\MinGW\\include");
     rectangle(100,100,300,300);
     rectangle(100,100,300,300);
     rectangle(100,100,300,300);
     rectangle(100,100,300,300);
     rectangle(100,100,300,300);
    rectangle(100,100,300,300);
    flood(x,y,RED,BLACK);
    getch();
    closegraph();


return 0;
}
