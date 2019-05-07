//#include<conio.h>
#include<iostream>
#include<time.h>
#include<graphics.h>
#include<stdlib.h>
//#include<dos.h>
using namespace std;


int main(){
float wxmin,wxmax,wymin,wymax;
float vxmin,vxmax,vymax,vymin;
float xmin,xmax,ymin,ymax;




    // initialize graph

cout<<"Enter wxmin,wxmax,wymin,wymax";
cin>>wxmin;
cin>>wymax;
cin>>wxmax;
cin>>wymax;

cout<<"Enter vxmin,vxmax,vymin,vymax";
cin>>vxmin;
cin>>vymin;
cin>>vxmax;
cin>>vymax;



cout<<"Enter the coordinates for the line to be drawn";
cin>>xmin;
cin>>ymin;
cin>>xmax;
cin>>ymax;


int gd = DETECT,gm;
initgraph(&gd, &gm, "C:\\Program Files(x86)\\CodeBlocks\\MinGW\\include");



float sx=(vxmax-vxmin)/(wxmax-wxmin);
float sy=(vymax-vymin)/(wymax-wymin);





 float xvmin= vxmin+((xmin-wxmin)*sx);
 float yvmin=vymin+((ymin-wymin)*sy);
 float xvmax= vxmin+((xmax-wxmin)*sx);
 float yvmax=vymin+((ymax-wymin)*sy);

rectangle( (int)wxmin, (int)wxmax, (int)wymin ,(int)wymax);
line((int)xmin, (int)ymin, (int)xmax, (int)ymax);


 rectangle( (int)vxmin, (int)vxmax, (int)vymin ,(int)vymax);
line((int)xvmin, (int)yvmin, (int)xvmax, (int)yvmax);
getch();
closegraph();

return 0;
}
