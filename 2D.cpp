#include<graphics.h>

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{

   int tx,ty,c,t,i,j,k,sx,sy, x1,x2,y1,y2;
   float tx1;
   int gd = DETECT, gm;
   initgraph(&gd, &gm,"NULL");

   x1 = y2 = 200;
   x2 = y1 = 250;
   rectangle(x1,y1,x2,y2);

   do
   {
   cout<<"Enter Choice:\n1 :Translation \n2 :Rotation \n3 :Scaling";
   cout<<"\nChoice :";
   cin>>c;

	switch(c)
	{
		case 1:
			cout<<"Enter tx & ty :";
			cin>>tx>>ty;
			rectangle(200+tx, 250+ty, 250+tx, 200+ty);
			break;

		case 2 :
			int xx1, yy1, xx2, yy2, xx3, yy3, xx4, yy4;
			int ax1, ay1, ax2, ay2, ax3, ay3, ax4, ay4;
			int refx, refy;
			cout<<"Enter angle :";
			cin>>tx1;
			tx1=tx1*(3.14/180);

			refx = refy = 100;

			xx1 = yy1 = yy2 = xx4 = 100;
			xx2 = xx3 = yy3 = yy4 = 150;

			ax1 = refy +(xx1-refx)* cos(tx1)-(yy1-refy)*sin(tx1);
			ay1 = refy +(xx1-refx)* sin(tx1)+(yy1-refy)*cos(tx1);

			ax2 = refy +(xx2-refx)* cos(tx1)-(yy2-refy)*sin(tx1);
			ay2 = refy +(xx2-refx)* sin(tx1)+(yy2-refy)*cos(tx1);

			ax3 = refy +(xx3-refx)* cos(tx1)-(yy3-refy)*sin(tx1);
			ay3 = refy +(xx3-refx)* sin(tx1)+(yy3-refy)*cos(tx1);

			ax4 = refy +(xx4-refx)* cos(tx1)-(yy4-refy)*sin(tx1);
			ay4 = refy +(xx4-refx)* sin(tx1)+(yy4-refy)*cos(tx1);

			line(ax1,ay1, ax2, ay2);
			line(ax2,ay2, ax3, ay3);
			line(ax3,ay3, ax4, ay4);
			line(ax4,ay4, ax1, ay1);
			break;

		case 3 :
		   cout<<"Enter sx & sy :";
		   cin>>sx>>sy;
		   rectangle(x1*sx, y1*sy, x2*sx, y2*sy);
		   break;
		 }
   }while(c!=0);
   getch();
   closegraph();
   return 0;
}
