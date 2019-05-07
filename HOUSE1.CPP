#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>

int main(){
 int gd = DETECT,gm;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   setcolor(BLUE);
	  line(100,100,200,100);
    line(100,100,100,200);
    line(100,200,200,200);
    line(200,200,200,100);
    line(100,100,150,300);
    line(100,100,150,300);
    line(125,100,125,135);
    line(145,100,145,135);
    line(125,135,145,135);

    closegraph();
    return 0;


}