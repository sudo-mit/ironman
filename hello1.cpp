//#include<conio.h>
#include<iostream>
#include<time.h>
#include<graphics.h>
#include<stdlib.h>
//#include<dos.h>
using namespace std;
int main(){
int gd, gm = DETECT;

    // initialize graph
    initgraph(&gd, &gm, "C:\\Program Files(x86)\\CodeBlocks\\MinGW\\include");

    // rectangle coordinate
    int top, left, bottom, right;

    top = left = 50;
    bottom = right = 300;

    // rectangle for print rectangle
    rectangle(left, top, right, bottom);
    rectangle(50,100,50,100);
    getch();
     circle (0, 0, 50);



}
