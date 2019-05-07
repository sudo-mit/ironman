#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void circle(){
  int y1,y2,a,b,c;
  b=(-360);
  a=1;
  for(int x=230;x<=250;x++){
    c=((x*x)-(480*x)+89900);
    y1=((-b)+sqrt((b*b)-(4*a*c)))/2;
    y2=((-b)-sqrt((b*b)-(4*a*c)))/2;
    putpixel(x,y1,WHITE);
    putpixel(x,y2,WHITE);
  }
}
void main(){
  int gd=DETECT,gm,res;
  initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
  res=graphresult();
  if(res!=0){
    cout<<"failed"<<endl;
  }
  line(200,200,200,300);
  line(280,200,280,300);
  line(200,300,280,300);
  line(200,200,280,200);
  line(225,300,225,230);
  line(225,230,255,230);
  line(255,230,255,300);
  line(200,200,240,150);
  line(240,150,280,200);
  line(280,200,390,175);
  line(390,175,390,275);
  line(390,275,280,300);
  line(240,150,350,125);
  line(350,125,390,175);
  circle();
  getch();
}