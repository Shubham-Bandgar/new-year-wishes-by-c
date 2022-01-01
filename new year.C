#include<stdio.h>
#include<conio.h>
#include<graphics.h>

#include<dos.h>


void main()
{



int i=0,j,KK;
int gd=DETECT,gm,x,y;
int color;
int p=300,q=250,r=100;
initgraph(&gd,&gm,"..\\bgi");

 setcolor(RED);

 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
outtextxy(60,250,"LET'S CELEBRATE NEW YEAR WITH FAB CODING");
setcolor(YELLOW);
  settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,5);
outtextxy(120,40,"WELCOME IN THE ");

settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,5);
outtextxy(175,80,"FAB CODING");
setcolor(WHITE);
delay(100);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(20,20,"PROGRAMMED BY SHUBHAM BANDGAR");
getch();



   cleardevice();

while(!kbhit())
{
color=rand()%15+1;
settextstyle(1 ,0,4);
setcolor(color);
settextstyle(SMALL_FONT,HORIZ_DIR,20);
outtextxy(70,70,"WISHING YOU A ");

putpixel(p+rand()%300,q+rand()%240,r+rand()%16);
putpixel(p-rand()%300,q+rand()%240,r+rand()%16);
putpixel(p+rand()%300,q-rand()%240,r+rand()%16);
putpixel(p-rand()%300,q-rand()%240,r+rand()%16);
setcolor(color+2);
settextstyle(BOLD_FONT,HORIZ_DIR,1);
outtextxy(200,130,"BLESSED NEW YEAR");
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,4);
   outtextxy(30,200," MAY THIS YEAR WILL GIVE YOU A  ");
   outtextxy(150,250," LOT'S OF HAPPINESS");
   settextstyle(SMALL_FONT,HORIZ_DIR,5);
 outtextxy(500,400,"FAB CODING");
x=rand()%1366;
y=rand()%768;
for(i=768;i!=y;i--)
{
if(i%50==0)
delay(1);
putpixel(x,i,14);
}
for(i=768;i!=y;i--)
{
if(i%70==0)
delay(1);
putpixel(x,i,0);
}
for(j=0;j!=100;j+=5)
{
for(i=0;i!=360;i+=15)
{
setcolor(color);
line(x,y,x+j*cos(3.14/180*i),y+j*sin(i*3.14/180));

}
}

setcolor(0);
for(j=0;j!=100;j++)
{
for(i=0;i!=360;i+=15)
line(x,y,x+j*cos(3.14/180*i),y+j*sin(i*3.14/180));

}
}}