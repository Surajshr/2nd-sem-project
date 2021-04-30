/*#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<dos.h>

//#include "basic.h"
#include "design.h"
#include "first.h"
static const int var=420;*/
#ifndef ROTATI_H
#define ROTATI_H
class rotating
{
	private:
		int s;
		int x1,x2,x3,y1,y2,y3;
	public:
		void Rotating_Menue();
		void Rotating_design();
		void graph();
		void Angle_menue();
		void Angle_design();
		void Take_Data();
		//triangle data//
		void Real_trangle();
		void img_At_90();
		void img_At_180();
		void img_At_270();
		void img_At_neg90();
		void img_At_neg270();
		
		//line data
		void Take_Line_data();
		void Real_line();
		void Img_Line_90();
		void Img_Line_180();
		void Img_Line_270();
		void Img_Line_neg90();
		void Img_Line_neg270();
};
	void rotating::Rotating_Menue()
		{
		       //	int gm,gd=DETECT;
		       //	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
			setcolor(7);
			settextstyle(2 ,HORIZ_DIR,6);
			outtextxy(130,130,"->> OPTIONS");
			setcolor(7);
		       //	outtextxy(170,130,"	#1 Circle");
		    //	outtextxy(170,150,"	#2 Triangle");
			outtextxy(170,170,"	#1 Trangle");
			outtextxy(170,190,"	#2 Lines");
			outtextxy(300,400,"MAIN MENUE: Press '5'");

		   }
	void rotating::Rotating_design()
		   {
			setcolor(9);
			//outtextxy(150,150,"||");
			outtextxy(150,170,"||");
			outtextxy(150,190,"||");
			outtextxy(150,210,"||");
			outtextxy(150,230,"||");
			outtextxy(130,220,"====================");
			int r=1;
			while(!kbhit())
			{
				setcolor(r);
				settextstyle(0,0,1);
				outtextxy(100,250,"Chose the Option(1-2):");
				delay(500);
				r++;
			}
		   }
	void rotating::graph()
	{
			int gm,gd=DETECT;
			initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	}
	void rotating::Angle_menue()
	{
			outtextxy(170,130," #1 90 degree about the origin");
			outtextxy(170,150," #2 180 degree about the origin");
			outtextxy(170,170," #3 270 degree about the origin");
			outtextxy(170,190," #4 -90 degree about the origin");
			outtextxy(170,210," #5 -270 degree about the origin");
			outtextxy(300,400,"MAIN MENUE: Press '6'");
	}
	void rotating::Angle_design()
	{
			setcolor(8);
			outtextxy(150,150,"||");
			outtextxy(150,170,"||");
			outtextxy(150,190,"||");
			outtextxy(150,210,"||");
			outtextxy(150,230,"||");
			outtextxy(150,130,"||");
			outtextxy(150,110,"||");
			outtextxy(130,220,"===============================");
			int r=1;
			while(!kbhit())
			{
				setcolor(r);
				settextstyle(0,0,1);
				outtextxy(100,250,"Chose the Option(1-5):");
				delay(500);
				r++;
			}

	}
	void rotating::Take_Data()
		{
		       //	int ymax;
		       //	ymax=getmaxy();
		       //	int x1,x2,x3,y1,y2,y3;
			cout<<"->>>Enter Points:: <<<-"<<endl;
			cout<<"Point X1:";
			cin>>x1;
			cout<<"Point Y1:";
			cin>>y1;
			cout<<"Point X2:";
			cin>>x2;
			cout<<"Point Y2:";
			cin>>y2;
			cout<<"Point X3:";
			cin>>x3;
			cout<<"point Y3:";
			cin>>y3;

	}
	void rotating::Real_trangle()
		{
			int ymax;
			ymax=getmaxy();

			line(var+5*x1,ymax/2-6*y1,var+5*x2, ymax/2-6*y2);//real trangle
			outtextxy(var+5*x1,ymax/2-6*y1,"A");

			line(var+5*x2,ymax/2-6*y2,var+5*x3,ymax/2-6*y3); //real trangle
			outtextxy(var+5*x2,ymax/2-6*y2,"B");

			line(var+5*x3,ymax/2-6*y3,var+5*x1,ymax/2-6*y1);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"c");
		}
	void rotating::img_At_90()
		{

			int ymax;
			ymax=getmaxy();
			

			line(var-5*y1,ymax/2-6*x1,var-5*y2,ymax/2-6*x2);//image on 90
			outtextxy(var-5*y1,ymax/2-6*x1,"a'");

			line(var-5*y2,ymax/2-6*x2,var-5*y3,ymax/2-6*x3);//image on 90
			outtextxy(var-5*y2,ymax/2-6*x2,"b'");

			line(var-5*y3,ymax/2-6*x3,var-5*y1,ymax/2-6*x1);//image on 90
			outtextxy(var-5*y3,ymax/2-6*x3,"c'");
			
			cout<<"\n\nRotating at clockwise 90"<<endl;
			cout<<"(x,y)-->(-y,x)"<<endl;
			cout<<"(x1,y1)::"<<"-"<<y1<<","<<x1<<endl;//img points printing
			cout<<"(x2,y2)::"<<"-"<<y2<<","<<x2<<endl;//img points printing
			cout<<"(x3,y3)::"<<"-"<<y3<<","<<x3<<endl;//img points printing
		}
	void rotating::img_At_180()
	{
		int ymax;
		ymax=getmaxy();

		line(var-5*x1,ymax/2+6*y1,var-5*x2,ymax/2+6*y2);//image on 180
		outtextxy(var-5*x1,ymax/2+6*y1,"a'");

		line(var-5*x2,ymax/2+6*y2,var-5*x3,ymax/2+6*y3);//image on 180
		outtextxy(var-5*x2,ymax/2+6*y2,"b'");

		line(var-5*x3,ymax/2+6*y3,var-5*x1,ymax/2+6*y1);//image on 180
		outtextxy(var-5*x3,ymax/2+6*y3,"c'");
		
		cout<<"\n\nRotating at clockwise 180"<<endl;
		cout<<"(x,y)-->(-x,-y)"<<endl;
		cout<<"(x1,y1)::"<<"-"<<x1<<","<<"-"<<y1<<endl;//img points printing
		cout<<"(x2,y2)::"<<"-"<<x2<<","<<"-"<<y2<<endl;//img points printing
		cout<<"(x3,y3)::"<<"-"<<x3<<","<<"-"<<y3<<endl;//img points printing
	}
	void rotating::img_At_270()
	{
		int ymax;
		ymax=getmaxy();
		line(var+5*y1, ymax/2+6*x1,var+5*y2, ymax/2+6*x2);//img on 270
		outtextxy(var+5*y1, ymax/2+6*x1,"a'");
		
		line(var+5*y2, ymax/2+6*x2,var+5*y3, ymax/2+6*x3);//img on 270
		outtextxy(var+5*y2, ymax/2+6*x2,"b'");

		line(var+5*y3, ymax/2+6*x3,var+5*y1, ymax/2+6*x1);//img on 270
		outtextxy(var+5*y3, ymax/2+6*x3,"c'");
		
		cout<<"\n\nRotating at clockwise 270"<<endl;
		cout<<"(x,y)-->(y,-x)"<<endl;
		cout<<"(x1,y1)::"<<y1<<","<<"-"<<x1<<endl;//img points printing
		cout<<"(x2,y2)::"<<y2<<","<<"-"<<x2<<endl;//img points printing
		cout<<"(x3,y3)::"<<y3<<","<<"-"<<x3<<endl;//img points printing
	}
	void rotating::img_At_neg90()
	{
		int ymax;
		ymax=getmaxy();
		line(var+5*y1, ymax/2+6*x1,var+5*y2,ymax/2+6*x2);//image on -90;
		outtextxy(var+5*y1, ymax/2+6*x1,"a'");
		
		line(var+5*y2, ymax/2+6*x2,var+5*y3,ymax/2+6*x3);//image on -90;
		outtextxy(var+5*y2, ymax/2+6*x2,"b'");
				
		line(var+5*y3, ymax/2+6*x3,var+5*y1,ymax/2+6*x1);//image on -90;
		outtextxy(var+5*y3, ymax/2+6*x3,"c'");
		
		cout<<"\n\nRotating at negative 90"<<endl;
		cout<<"(x,y)-->(y,-x)"<<endl;
		cout<<"(x1,y1)::"<<y1<<","<<"-"<<x1<<endl;//img points printing
		cout<<"(x2,y2)::"<<y2<<","<<"-"<<x2<<endl;//img points printing
		cout<<"(x3,y3)::"<<y3<<","<<"-"<<x3<<endl;//img points printing
		
	}
	void rotating::img_At_neg270()
	{
		int ymax;
		ymax=getmaxy();
		line(var-5*y1,ymax/2-6*x1,var-5*y2,ymax/2-6*x2);//image on neg 270
		outtextxy(var-5*y1,ymax/2-6*x1,"a'");

		line(var-5*y2,ymax/2-6*x2,var-5*y3,ymax/2-6*x3);//image on neg270
		outtextxy(var-5*y2,ymax/2-6*x2,"b'");

		line(var-5*y3,ymax/2-6*x3,var-5*y1,ymax/2-6*x1);//image on neg270
		outtextxy(var-5*y3,ymax/2-6*x3,"c'");
		
		cout<<"\n\nRotating at negative 270"<<endl;
		cout<<"(x,y)-->(-y,x)"<<endl;
		cout<<"(x1,y1)::"<<"-"<<y1<<","<<x1<<endl;//img points printing
		cout<<"(x2,y2)::"<<"-"<<y2<<","<<x2<<endl;//img points printing
		cout<<"(x3,y3)::"<<"-"<<y3<<","<<x3<<endl;//img points printing
		
	}
	void rotating::Take_Line_data()
	{
			
			int ymax;
			ymax=getmaxy();
			y1=ymax/2;
			cout<<"Enter the points"<<endl;
			cout<<"Point X2:";
			cin>>x2;
			cout<<"Point Y2:";
			cin>>y2;
			line(var,y1,var+5*x2, ymax/2-6*y2);//original line
			outtextxy(var+5*x2, ymax/2-6*y2,"A");
	}
	void rotating::Img_Line_90()
	{
			int ymax;
			ymax=getmaxy();
			y1=ymax/2;
			//int var=420;
			line(var,y1,var-5*y2,ymax/2-6*x2); //image in +90
			outtextxy(var-5*y2,ymax/2-6*x2,"A'");
			cout<<"\n\nRotating at clockwise 90"<<endl;
			cout<<"(x,y)-->(-y,x)"<<endl;
			cout<<"(x2,y2)::"<<"-"<<y2<<","<<x2<<endl;//img points printing
			
	}
	void rotating::Img_Line_180()
	{
		int ymax;
		ymax=getmaxy();
		y1=ymax/2;
		line(var,y1,(var-5*x2),(ymax/2+6*y2)); //rotating image  in +180
		outtextxy((var-5*x2),(ymax/2+6*y2),"A'");	
		cout<<"\n\nRotating at clockwise 180"<<endl;
		cout<<"(x,y)-->(-x,-y)"<<endl;
		cout<<"(x2,y2)::"<<"-"<<x2<<","<<"-"<<y2<<endl;//img points printing
	}
	void rotating::Img_Line_270()
	{
		int ymax;
		ymax=getmaxy();
		y1=ymax/2;
		line(var,y1,var+5*y2, ymax/2+6*x2); //image in +270
		outtextxy(var+5*y2, ymax/2+6*x2,"A'");
		cout<<"\n\nRotating at clockwise 270"<<endl;
		cout<<"(x,y)-->(y,-x)"<<endl;
		cout<<"(x2,y2)::"<<y2<<","<<"-"<<x2<<endl;//img points printing
	}
	void rotating::Img_Line_neg90()
	{
		int ymax;
		ymax=getmaxy();
		y1=ymax/2;
		line(var,y1,var+5*y2, ymax/2+6*x2); //image in -90
		outtextxy(var+5*y2, ymax/2+6*x2,"A'");
		cout<<"\n\nRotating at negative 90"<<endl;
		cout<<"(x,y)-->(y,-x)"<<endl;
		cout<<"(x2,y2)::"<<y2<<","<<"-"<<x2<<endl;//img points printing
	}
	void rotating::Img_Line_neg270()
	{
		int ymax;
		ymax=getmaxy();
		y1=ymax/2;
		line(var,y1,var-5*y2,ymax/2-6*x2); //image in -270
		outtextxy(var-5*y2,ymax/2-6*x2,"A'");
		cout<<"\n\nRotating at negative 270"<<endl;
		cout<<"(x,y)-->(-y,x)"<<endl;
		cout<<"(x1,y1)::"<<"-"<<y1<<","<<x1<<endl;//img points printing
		cout<<"(x2,y2)::"<<"-"<<y2<<","<<x2<<endl;//img points printing
	}
class Fun_Rotating
{
	private:
		int z;

	public:
		void All_operation()
		{
			rotating ro;
			char choice;
			First_page FIRST_PAGE;
			Graph_Design GRAPH_DESIGN;
			ro.graph();
			cleardevice();
				Back_to_Rotating_menue:
				cleardevice();
				graphdefaults();
				ro.Rotating_Menue();
				ro.Rotating_design();
				choice=getche();
				 switch(choice)
					{
					case '1':
						{
							cleardevice();
							ro.graph();
							char  choice2;
							Back_To_Reflection_Triangle:
							cleardevice();
							graphdefaults();
							ro.Angle_menue();
							ro.Angle_design();
							choice2=getche();
							switch(choice2)
							{
								case '1':
									{
										cleardevice();
										GRAPH_DESIGN.functions();
										ro.Take_Data();
										ro.Real_trangle();
										ro.img_At_90();
										getch();
										goto Back_To_Reflection_Triangle;
										//break;
									}
								case '2':
									{
										cleardevice();
										GRAPH_DESIGN.functions();
										ro.Take_Data();
										ro.Real_trangle();
										ro.img_At_180();
										getch();
										goto Back_To_Reflection_Triangle;
										//break;
										
									}
								case '3':
									{
										cleardevice();
										GRAPH_DESIGN.functions();
										ro.Take_Data();
										ro.Real_trangle();
										ro.img_At_270();
										getch();
										goto Back_To_Reflection_Triangle;
										//break;
									}
								case '4':
									{
										cleardevice();
										GRAPH_DESIGN.functions();
										ro.Take_Data();
										ro.Real_trangle();
										ro.img_At_neg90();
										getch();
										goto Back_To_Reflection_Triangle;
										//break;
									}
								case '5':
									{
										cleardevice();
										GRAPH_DESIGN.functions();
										ro.Take_Data();
										ro.Real_trangle();
										ro.img_At_neg270();
										getch();
										goto Back_To_Reflection_Triangle;
										//break;
									}
								case '6':
									{
										goto Back_to_Rotating_menue;
									}
								default:
									{
										FIRST_PAGE.Main_Error_message();
										delay(1000);
										goto Back_To_Reflection_Triangle;
									}

							//getch();
					      	 
					      	}
					    //break;
						}
						case '2':
							{
								cleardevice();
								ro.graph();
								char  choice3;
								Back_To_Reflection_single:
								cleardevice();
							    graphdefaults();
								ro.Angle_menue();
								ro.Angle_design();
								choice3=getche();
								switch(choice3)
								{
									case '1':
										{
											cleardevice();
											GRAPH_DESIGN.functions();
											ro.Take_Line_data();
											ro.Img_Line_90();
											getch();
											goto Back_To_Reflection_single;
										//	break;
										}
									case'2':
										{
											cleardevice();
											GRAPH_DESIGN.functions();
											ro.Take_Line_data();
											ro.Img_Line_180();
											getch();
											goto Back_To_Reflection_single;
											//break;	
										}
									case'3':
										{
											cleardevice();
											GRAPH_DESIGN.functions();
											ro.Take_Line_data();
											ro.Img_Line_270();
											getch();
											goto 	Back_To_Reflection_single;
											//break;
										}
									case'4':
										{
											cleardevice();
											GRAPH_DESIGN.functions();
											ro.Take_Line_data();
											ro.Img_Line_neg90();
											getch();
											goto Back_To_Reflection_single;
											//break;
										}
									case'5':
										{
											cleardevice();
											GRAPH_DESIGN.functions();
											ro.Take_Line_data();
											ro.Img_Line_neg270();
											getch();
											goto 	Back_To_Reflection_single;
											//break;
										}
									case'6':
										{
											goto Back_to_Rotating_menue;
										}
									default:
										{
										FIRST_PAGE.Main_Error_message();
										delay(1000);
										goto Back_To_Reflection_single;
										}
								}
							//break;
							}
							default:
								{
									FIRST_PAGE.Main_Error_message();
									delay(1000);
									goto Back_to_Rotating_menue;
								}
					}	
	   }
				 
//getch();
}
#endif//endl;
