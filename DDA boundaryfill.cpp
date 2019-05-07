#include<iostream>
#include<time.h>
#include<graphics.h>
using namespace std;
void line(float xk,float yk,float x,float y){
    float m;
    m=(y-yk)/(x-xk);
    if(m<1){
     while(xk<=x){
    putpixel((int)xk,(int)yk,RED);
     xk=xk+1;
      yk=yk+m;

    }}
    else
        if(m>1){
            while(yk<=y){
                putpixel((int)xk,(int)yk,RED);
                yk=yk+1;
                xk=xk+(1/m);

            }
        }
        else if(m==1){
            while(yk<=y&&xk<=x){
                 putpixel((int)xk,(int)yk,RED);
                yk=yk+1;
                xk=xk+1;
            }
        }

}

        void boundaryfill(int a,int b, int boundarycolor,int fillcolor){
            int color=getpixel(a,b);
            if(color!=boundarycolor&&color!=fillcolor){
                putpixel(a,b,fillcolor);
                boundaryfill(a+1,b,boundarycolor,fillcolor);
                boundaryfill(a,b-1,boundarycolor,fillcolor);
                boundaryfill(a,b+1,boundarycolor,fillcolor);
                boundaryfill(a-1,b,boundarycolor,fillcolor);



            }



        }




int main(){
float yk,xk,yk1,xk1,x,y,m;
int gd=DETECT,gm;
initgraph(&gd,&gm,"NULL");
/*cout<<"Enter the starting and ending points for ";
cin>>xk;
cin>>yk;
cin>>x;
cin>>y;*/

line(200,200,200,300);
line(200,200,300,200);
line(300,200,300,300);
line(250,400,300,300);

line(200,300,250,400);

boundaryfill(210,210,RED,WHITE);
//dda(150,450,100,275);
//dda(100,275,200,300);
getch();
closegraph();
return 0;
}


