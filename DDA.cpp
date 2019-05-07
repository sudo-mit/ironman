//#include<conio.h>
#include<iostream>
#include<time.h>
#include<graphics.h>
#include<stdlib.h>
using namespace std;
int main(){
    int x1,y1,x0,y0; //Declare the points
    cout<<"Enter the points";
    cin>>x0;
    cin>>y0;
    cin>>x1;
    cin>>y1;
    float m;
     int gd= DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

m=((y1-y0)/(x1-x0)); //Slope calculation
while(x0!=x1){
if(m<1){            //case 1
x0=x0+1;
y0=y0+int(m);
putpixel(x0,y0,RED); // Construct the line
}
else if (m>1)  //case 2
{
y0=y0+1;
x0=x0+(1/m);
putpixel(x0,y0,RED);
}
else if (m==1)  //Case 3
{
    x0=x0+1;
    y0=y0+1;
    putpixel(x0,y0,RED);
}
}
delay(5000);
closegraph();
return 0;
}
