#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


    void    EightWaySymmetricPlot(int xc,int yc,int x,int y)
   {
    putpixel(x+xc,y+yc,YELLOW);
    putpixel(x+xc,-y+yc,YELLOW);
    putpixel(-x+xc,-y+yc,YELLOW);
    putpixel(-x+xc,y+yc,YELLOW);
    putpixel(y+xc,x+yc,YELLOW);
    putpixel(y+xc,-x+yc,YELLOW);
    putpixel(-y+xc,-x+yc,YELLOW);
    putpixel(-y+xc,x+yc,YELLOW);
   }

    void BresenhamCircle(int xc,int yc,int r)
   {
    int x=0,y=r,d=3-(2*r);
    EightWaySymmetricPlot(xc,yc,x,y);

    while(x<=y)
     {
      if(d<=0)
	     {
	d=d+(4*x)+6;
      }
     else
      {
	d=d+(4*x)-(4*y)+10;
	y=y-1;
      }
       x=x+1;

       EightWaySymmetricPlot(xc,yc,x,y);
       delay(5);
      }
      setfillstyle(SOLID_FILL,YELLOW);

      floodfill(300,250,YELLOW);
    }


 void smile(){

     for(int i=1;i<50;i++){

	fillellipse(230,200,25,1+i);
	fillellipse(370,200,25,1+i);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(230,200,BLACK);
	floodfill(370,200,BLACK);
	delay(5);
     }
     for(i=220 ;i<=270;i++){
	arc(300,164,220,i,200);
	arc(300,165,220,i,200);
	arc(300,166,230,i+10,200);
	arc(300,167,240,i+20,200);
	arc(300,168,250,i+30,200);
	arc(300,169,260,i+40,200);
	arc(300,170,265,i+45,200);
	arc(300,171,270,i+50,200);

	setcolor(BLACK);
	delay(5);
     }
     delay(2000);
      for(i=220 ;i<=270;i++){
	arc(300,164,220,i,200);
	arc(300,165,220,i,200);
	arc(300,166,230,i+10,200);
	arc(300,167,240,i+20,200);
	arc(300,168,250,i+30,200);
	arc(300,169,260,i+40,200);
	arc(300,170,265,i+45,200);
	arc(300,171,270,i+50,200);

	setcolor(YELLOW);
	delay(5);
     }

     for(i=0;i<=50;i++){
	fillellipse(230,200,25,i+1);
	fillellipse(370,200,25,i+1);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(230,200,YELLOW);
	floodfill(370,200,YELLOW);
	delay(5);
     }
    cleardevice();
 }

 void upsideEye(){
	delay(1000);
	setcolor(WHITE);
	circle(230,200,50);
	circle(370,200,50);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(230,200,WHITE);
	floodfill(370,200,WHITE);

	setcolor(BLACK);
	circle(230,200,15);
	circle(370,200,15);

	rectangle(220,315,380,330);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(230,200,BLACK);
	floodfill(370,200,BLACK);
	floodfill(225,317,BLACK);

	delay(1500);

	setcolor(WHITE);
	circle(230,200,15);
	circle(370,200,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(230,200,WHITE);
	floodfill(370,200,WHITE);

	setcolor(BLACK);
	circle(230,165,15);
	circle(370,165,15);

	setfillstyle(SOLID_FILL,BLACK);
	floodfill(230,165,BLACK);
	floodfill(370,165,BLACK);

	delay(1500);
	setcolor(WHITE);
	circle(230,165,15);
	circle(370,165,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(230,165,WHITE);
	floodfill(370,165,WHITE);


	setcolor(BLACK);
	circle(230,200,15);
	circle(370,200,15);


	setfillstyle(SOLID_FILL,BLACK);
	floodfill(230,200,BLACK);
	floodfill(370,200,BLACK);

	delay(2000);
	for(int i=380;i>=220;i--){
		setcolor(YELLOW);
		rectangle(i,315,380,330);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(210,i,YELLOW);
		delay(5);
	}

	setcolor(YELLOW);
	circle(230,200,50);
	circle(370,200,50);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(230,200,YELLOW);
	floodfill(370,200,YELLOW);
	delay(10);
	cleardevice();
 }

 void winking(){
	delay(1000);
	setcolor(BLACK);
	circle(230,200,25);
	circle(370,200,25);

	arc(360,210,40,110,60);
	arc(340,145,80,280,8);
	arc(341,217,38,90,80);


	arc(240,207,80,145,55);
	arc(252,146,260,100,8);
	arc(251,197,90,153,60);


		arc(300,190,240,300,150);
		arc(300,255,220,320,100);


	setfillstyle(SOLID_FILL,BLACK);
	floodfill(230,200,BLACK);
	floodfill(370,200,BLACK);
	floodfill(300,350,BLACK);

	floodfill(340,145,BLACK);
	floodfill(251,144,BLACK);

	delay(1500);

	setcolor(YELLOW);
	circle(230,200,25);
	arc(240,207,80,145,55);
	arc(252,146,260,100,8);
	arc(251,197,90,153,60);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(230,200,YELLOW);
	floodfill(252,147,YELLOW);

	setcolor(BLACK);

	arc(240,227,80,145,55);
	arc(252,166,260,100,8);
	arc(251,217,90,153,60);
	circle(230,225,25);

	setfillstyle(SOLID_FILL,BLACK);
	floodfill(230,225,BLACK);
	floodfill(252,166,BLACK);

	setcolor(YELLOW);
	circle(230,245,30);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(230,240,YELLOW);

	delay(2000);
	cleardevice();

 }
 void cheers(){
	delay(1000);
      setcolor(BLACK);
	arc(230,200,355,185,40);
	arc(230,201,355,185,40);
	arc(230,202,355,185,40);
	arc(230,218,10,170,40);
	arc(230,219,10,170,40);
	arc(230,220,10,170,40);


	arc(370,200,355,185,40);
	arc(370,201,355,185,40);
	arc(370,202,355,185,40);

	arc(370,218,10,170,40);
	arc(370,219,10,170,40);
	arc(370,220,10,170,40);

      //	arc(300,-10,248,292,330);
     //	arc(300,15,249,291,330);

     //	arc(300,295,345,0,120);
      //	arc(300,293,180,195,120);
      //	arc(300,283,200,340,120);
     //	putpixel(300,340,BLACK);
	setfillstyle(SOLID_FILL,BLACK);


	setcolor(WHITE);
      //	setfillstyle(SOLID_FILL,WHITE);
      //	floodfill(300,295,WHITE);

	for(int i=14;i>=5;i--){

	arc(300,i,250,290,330);
	}

	for(i=4;i>-30;i--){

	arc(300,i,249,291,330);
	delay(5);
	}

	setfillstyle(SOLID_FILL,WHITE);
	delay(5);


	setcolor(RED);


	for(i=250;i>=200;i--){

	arc(300,i,190,350,145);

	setfillstyle(SOLID_FILL,RED);

	delay(5);
       }
       delay(3000);
       setcolor(BLACK);
       for(i=0;i<=200;i++){
	   circle(300,250,i);
	   delay(10);

       }


      delay(500);
      cleardevice();

 }





    int  main(void)
   {

    int xc,yc,r,gdriver = DETECT, gmode, errorcode;

     initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");


     errorcode = graphresult();

      if (errorcode != grOk)
     {
	printf("Graphics error: %s\n", grapherrormsg(errorcode));
	printf("Press any key to halt:");
	getch();
	exit(1);
     }
	setcolor(WHITE);
       outtextxy(200,200,"COMPUTER GRAPHICS MINI PROJRCT :)");
       outtextxy(200,240,"NEEL LAD  : 19SE02CE082 ");
       delay(3000);
       cleardevice();
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
	BresenhamCircle(300,250,200);
       smile();
       BresenhamCircle(300,250,200);
       winking();
       BresenhamCircle(300,250,200);
       upsideEye();
       BresenhamCircle(300,250,200);
       cheers();
       setcolor(WHITE);
       outtextxy(300,220,"NOICE !" );
       outtextxy(280,250,"Thank You :D");
     getch();
     closegraph();
     return 0;
    }
