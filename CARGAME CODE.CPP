#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>

int cx1=287,cx2=352,l=0;    /* car initial coordinates & car moving*/
int h=0; /*bfor no of cars crossed*/
int i=0;   /*for increment roadbar*/
int  c=0;  /* for road 1 */
time_t t; /*for srand*/
int  r,m=0;   /* for car 1*/
int n=0,c2=0; /*for car 2*/
int o=0,c3=0; /* for car 3 */
int v=1;/*for game over*/
int u=1; /*for increament speed*/
int z=0;/*for only one increment in speed*/

void setup()
{
	rectangle(0,0,getmaxx(),getmaxy()); //screen rectangle
	setfillstyle(1,GREEN);
	bar(0,0,213,getmaxx()); //left bar
	setfillstyle(1,GREEN);
	bar(426,0,getmaxx(),getmaxy());    //right bar
	setfillstyle(1,WHITE);
	bar(213,0,210,getmaxx());    //left road
	setfillstyle(1,WHITE);
	bar(426,0,429,getmaxy());     //right road
	setfillstyle(1,RED);
	bar(cx1,420,cx2,479);     //car
	line(cx1+24,427,cx1+40,427);
	line(cx1+16,442,cx1+49,442);
	line(cx1 +24,427,cx1+16,442);
	line(cx1+40,427,cx1+49,442);
	setfillstyle(1,BLACK);
	bar(cx1+16,457,cx1+49,471);
	line(cx1,420,cx1+16,420);
	line(cx1+16,420,cx1,442);
	line(cx1,442,cx1,420);
	line(cx1+65,420,cx1+65,442) ;
	line(cx1+49,420,cx1+65,442);
	line(cx1,420,cx1+65,420);




	setfillstyle(1,WHITE);
	bar(316,0,322,80);
	setfillstyle(1,WHITE);    // 3 middle roadbar
	bar(316,120,322,200);
	setfillstyle(1,WHITE);
	bar(316,240,322,320);
	settextstyle(10,HORIZ_DIR,2);
	outtextxy(475,350,"LEVEL-1");
	outtextxy(30,200,"HIGHSCORE");

}

void draw()
{
      // for road bar clearing
	setfillstyle(1,0);
	bar(316,0+i,322,80+i);
	setfillstyle(1,0);    //bar
	bar(316,120+i,322,200+i);
	setfillstyle(1,0);
	bar(316,240+i,322,320+i);
 }


  void roadbar()
  {
	setfillstyle(1,WHITE);            //1
	bar(316,0+i,322,80+i);
	setfillstyle(1,WHITE);    //middle roadbar
	bar(316,120+i,322,200+i);
	setfillstyle(1,WHITE);
	bar(316,240+i,322,320+i);
	setfillstyle(1,RED);
	bar(cx1,420,cx2,479); //new car    ******(main)********
	line(cx1+24,427,cx1+40,427);
		line(cx1+24,427,cx1+40,427);
	line(cx1+16,442,cx1+49,442);
	line(cx1+24,427,cx1+16,442);
	line(cx1+40,427,cx1+49,442);
	setfillstyle(1,YELLOW);
	bar(cx1+16,457,cx1+49,471);
	line(cx1,420,cx1+16,420);
	line(cx1+16,420,cx1,442);
	line(cx1,442,cx1,420);
	line(cx1+65,420,cx1+65,442) ;
	line(cx1+49,420,cx1+65,442);
	line(cx1,420,cx1+65,420);



	setfillstyle(1,WHITE);               //2  for good appearence
	bar(316,0+i,322,80+i);
	setfillstyle(1,WHITE);    //middle roadbar
	bar(316,120+i,322,200+i);
	setfillstyle(1,WHITE);
	bar(316,240+i,322,320+i);



	setfillstyle(1,WHITE);            //3  for good appearence
	bar(316,0+i,322,80+i);
	setfillstyle(1,WHITE);    //middle roadbar
	bar(316,120+i,322,200+i);
	setfillstyle(1,WHITE);
	bar(316,240+i,322,320+i);


	setfillstyle(1,WHITE);                  //4  for good appearence
	bar(316,0+i,322,80+i);
	setfillstyle(1,WHITE);    //middle roadbar
	bar(316,120+i,322,200+i);
	setfillstyle(1,WHITE);
	bar(316,240+i,322,320+i);


	setfillstyle(1,WHITE);                  //5 for good appearence
	bar(316,0+i,322,80+i);
	setfillstyle(1,WHITE);    //middle roadbar
	bar(316,120+i,322,200+i);
	setfillstyle(1,WHITE);
	bar(316,240+i,322,320+i);


	if(i==100)
	  {    //for white clearing
		setfillstyle(1,0);
		bar(316,0+i,322,80+i);
		setfillstyle(1,0);    //middle roadbar at car clearing
		bar(316,120+i,322,200+i);
			setfillstyle(1,0);
		bar(316,240+i,322,320+i);
		i=0;
	   }



}
void traffic()
{
	srand((unsigned)time(&t));       //for giving random values
	 r=rand()%3;
	if(r==1&&c==0)
	{       setfillstyle(1,CYAN);   //for creating car in road 1
		bar(213,0+m,284,50+m);
		c=1;       // stop creating until this goes last
	}
	if(c==1)
	{
		setfillstyle(1,0);
		bar(213,0+m,284,50+m);  // for car clearing
		m=m+u;                  // car coordinates increament
		setfillstyle(1,CYAN);
		bar(213,0+m,284,50+m);
		setfillstyle(1,CYAN);    // for good appearence
		bar(213,0+m,284,50+m);
		setfillstyle(1,CYAN);
		bar(213,0+m,284,50+m);

		if(m>=479)
		{
			setfillstyle(1,0);
			bar(213,0+m,284,50+m);  //for   car clearing
			m=0;       // for recreating car at top
			c=0;       //  allowing creating car
		       h++;    // increasing score

		}
	}

	if(r==2&&c2==0)                // for car 2
	{       setfillstyle(1,BROWN); //creating car2
		bar(287,0+n,352,50+n);
		c2=1;      /// stop creating until this last goes
	}
	if(c2==1)
	{
		setfillstyle(1,0);         // for car2 clearing
		bar(287,0+n,352,50+n);
		n=n+u;                   // for car2 coordinates increament
		setfillstyle(1,BROWN);
		bar(287,0+n,352,50+n);
		setfillstyle(1,BROWN); //for car2 goodappearence
		bar(287,0+n,352,50+n);
		setfillstyle(1,BROWN);
		bar(287,0+n,352,50+n);

		if(n>=479)
		{
			setfillstyle(1,0);      // for car2 clearing
			bar(287,0+n,352,50+n);
			n=0;  // goes to top
			c2=0;    // allowing another car creating at top
			   h++;   //for score increase

		}
	}
	if((m-n<115||n-m<115)&&(n<130))
	{
		r=5;                    // for worst case
	}
	if(r==0&&c3==0)
	{       setfillstyle(1,YELLOW);
		bar(357,0+o,423,50+o);      // creating car3
		c3=1;     // stop creating car
	}
	if(c3==1)
	{
		setfillstyle(1,0);
		bar(357,0+o,423,50+o);     // for clearing car3
		o=o+u;            // for increamening car3 coordinates
		setfillstyle(1,YELLOW);
		bar(357,0+o,423,50+o);
		setfillstyle(1,YELLOW); // for good appearence
		bar(357,0+o,423,50+o);
		setfillstyle(1,YELLOW);
		bar(357,0+o,423,50+o);

		if(o>=479)
		{
			setfillstyle(1,0);     //for clearing car3
			bar(357,0+o,423,50+o);
			o=0;     //go car3 to top
			c3=0;    //   allowing creating car at top
			 h++;    // increasing score

		}
	}


}



void input()
{
	if(kbhit())      //keyboard hit
	{
		switch(getch())
		{
		   case 'a':
		   case 'A':
			l=1;
			break;
		   case 'd':
		   case 'D' :
			l=2;
			break;
	       }
	}
	if(m>371&&m<479)
	{
		if(cx1==216)
		{
			v=0;
			delay(100);
		}
	}
	if(n>371&&n<479)
	{
		if(cx1==287)              //for game over  left
		{
			v=0;
			delay(100);
		}
	}
	if(o>371&&o<479)
	{
		if(cx1==358)
		{                       //for game over    right
			v=0;
			delay(100);
		}
	}
}

void logic()
{
      switch(l)
      {
	case 1:
		if(cx1==216)
		{
		}
		else
		{
			setfillstyle(1,0);
			bar(cx1,420,cx2,479); //oldcar vanish
			setcolor(BLACK);
			line(cx1+24,427,cx1+40,427);
			line(cx1+24,427,cx1+40,427);
			line(cx1+16,442,cx1+49,442);
			line(cx1+24,427,cx1+16,442);
			line(cx1+40,427,cx1+49,442);
			setfillstyle(1,BLACK);
			bar(cx1+16,457,cx1+49,471);
				line(cx1,420,cx1+16,420);
			line(cx1+16,420,cx1,442);
			line(cx1,442,cx1,420);
			line(cx1+65,420,cx1+65,442) ;
			line(cx1+49,420,cx1+65,442);
	line(cx1,420,cx1+65,420);
			setcolor(WHITE);
			cx1=cx1-71;
			cx2=cx2-71;   // for changing coordinates

		}
		break;
	case 2:
		if(cx2==423)
		{
		}
		else
		{
			setfillstyle(1,0);
			bar(cx1,420,cx2,479);   //oldcar vanish
			setcolor(BLACK);
			line(cx1+24,427,cx1+40,427);
			line(cx1+24,427,cx1+40,427);
			line(cx1+16,442,cx1+49,442);
			line(cx1+24,427,cx1+16,442);
			line(cx1+40,427,cx1+49,442);
			setfillstyle(1,BLACK);
			bar(cx1+16,457,cx1+49,471);
				line(cx1,420,cx1+16,420);
	line(cx1+16,420,cx1,442);
	line(cx1,442,cx1,420);
	line(cx1+65,420,cx1+65,442) ;
	line(cx1+49,420,cx1+65,442);
	line(cx1,420,cx1+65,420);
			setcolor(WHITE);
			cx1=cx1+71;
			cx2=cx2+71;//forchanging coordinates
		}
		break;
       }
	  l=0;    //for not to changing car direction

}

int main()
{
   int s; /*for score*/
   char arr[10];    //for converting int to char array  (score)
   char hig[10];  //for converting int to char array (last play highscore)
	int ps;   //from file
  FILE *fp;
 /*  fp= fopen("highscore.txt","r");
   int ps;
   fscanf(fp,"%d",&ps);
   sprintf(hig,"%d",ps);
   outtextxy(50,250,hig);
   fclose(fp);  */


 int gdriver = DETECT,gmode;

	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
       setup();                       // for graphicdrivers install
       fp= fopen("C:\\testh.txt","r");
    /*   if(fp==NULL)
       {
		printf("FILE is open");
       }
       else
       {
		printf("FILE IS NOT OPEN");
       }  */

   fscanf(fp,"%d",&ps);
   sprintf(hig,"%d",ps);
   outtextxy(50,250,hig);
   fclose(fp);

       while(v)          //looping starts
      {

	  draw();           //it contains clearing road bars
	  input();       // it takes our input   and game over condition

	  logic();       // it contains  our car moving
	  i++;  //for roadbar increaments//
	  traffic(); // it controlls traffic cars

	  roadbar();  // it stabilizes road bar
	if(h==5&&z==0)
	{
		setfillstyle(1,GREEN);       //for refreshing level
	bar(473,352,637,450);
       settextstyle(9,HORIZ_DIR,2);
       outtextxy(475,350,"LEVEL-2");    // for displaying level number
		u++;         //speed control
		z=1;
		delay(100);   // to stop game for 1sec

	}
	if(h==10&&z==1)
	{
	setfillstyle(1,GREEN);
	bar(473,352,637,450);
       settextstyle(8,HORIZ_DIR,2);
       outtextxy(475,350,"LEVEL-3");
	u=u+2;     //speed control
	z=2;
	}
	if(h==20&&z==2)
	{
	setfillstyle(1,GREEN);
	bar(473,352,637,450);
       settextstyle(7,HORIZ_DIR,2);
       outtextxy(475,350,"LEVEL-4");
		u++;              // for speed control
		z=3;
	}
	if(h==40&&z==3)
	{
	setfillstyle(1,GREEN);
	bar(473,352,637,450);
       settextstyle(10,HORIZ_DIR,2);
       outtextxy(475,350,"LEVEL-5");
		u++;           //for speed control
		z=4;
	}
	if(h==60&&z==4)
	{
	    setfillstyle(1,GREEN);
	bar(473,352,637,450);
       settextstyle(10,HORIZ_DIR,2);
       outtextxy(475,350,"LEVEL-6");
		u++;
		z=5;
	}
	if(h==100&&z==5)
	{
	setfillstyle(1,GREEN);
	bar(473,352,500,370);
       settextstyle(10,HORIZ_DIR,2);
       outtextxy(475,350,"LEVEL-7");
		u++;
		z=6;
	}
	sprintf(arr,"%d",h);         //converting int to char
	setfillstyle(1,GREEN);
	bar(0,0,100,200);           // refreshing score
	settextstyle(10,HORIZ_DIR,2);      // changing text style
	outtextxy(50,40,arr);          //
       }
       setfillstyle(1,GREEN);
       bar(0,0,100,200);
       outtextxy(450,150,"GAMEOVER!");
      outtextxy(50,40,arr);      //displaying score  after gameover
      if(h>=ps)
      {
      outtextxy(getmaxx()/2,getmaxy()/2,"NEW HIGHSCORE");
      fp=fopen("C:\\testh.txt","w");
      fprintf(fp,"%d",h);
      fclose(fp);
      }
	 getch();
	 getch();     // stops programme until we press button
      return 0;



}