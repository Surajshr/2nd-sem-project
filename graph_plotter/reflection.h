/*#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>*/
#ifndef reflection_h
#define reflection_h
static const int var=420;
class graphLine
{       private:
		int x,y,i;
	public:
	void X_axis();
	void Y_axis();
	void Axis_side();
};
void graphLine::X_axis()
{
    	int var=420;
		int gd=DETECT,gm;
		initgraph(&gd,&gm,"C:\\turboc3\\BGI");
		x=getmaxx();
		y=getmaxy();
		//cout<<"value of x"<<x<<"value of y"<<y;
		for(i=0;i<=y;i=i+5)
		{
			   line(var-2,5+i,var+2,5+i); //vertical points
		}
		line(var,0,var,y);		//line of x-axis
}
void graphLine:: Y_axis()
	{
		
		for(i=200;i<=x;i=i+5)
		{
			 line(5+i,y/2-2,5+i,y/2+2);    //hoizental points
		}
		line(200,y/2,x,y/2);		// line of y-axis
	}

		//finish of the line on y-axis //
     //	}
void graphLine::Axis_side()
	{
		outtextxy(420+5,y/2+5,"0");		//origin
	outtextxy(200-5,y/2+5,"X'");		//point of negative x-axis
	outtextxy(630,y/2+5,"X");			//point of x-axis
	outtextxy(420-10,7,"Y");				//point of y-axis
	outtextxy(405-5,y-10,"Y'"); 			//point of negative y-axis
	line(200,0,200,y);  			//Dividing vertical  line
	}

	class reflection_x_axis
	{
	private:
		int x,y,x1,x2,x3,y1,y2,y3,x4,y4,xmax,ymax;
	public:
		void ref_x_axis_single()
		{
			xmax=getmaxx();
			ymax=getmaxy();
			cout<<"enter the co-ordinates"<<endl;
			cout<<"x=";
			cin>>x1;
			cout<<"y=";
			cin>>y1;
			outtextxy(420+5*x1,ymax/2-6*y1,"A");  //real point
			circle(420+5*x1,ymax/2-6*y1,1);
			
			outtextxy(420+10*x1,ymax/2+10*y1,"A'");//image
			circle(420+5*x1,ymax/2+6*y1,1);
		}
		
		void ref_x_axis_traingle()
		{
			xmax=getmaxx();
/			ymax=getmaxy();

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

			line(var+5*x1,ymax/2-6*y1,var+5*x2, ymax/2-6*y2);//real trangle
			outtextxy(var+5*x1,ymax/2-6*y1,"A");

			line(var+5*x2,ymax/2-6*y2,var+5*x3,ymax/2-6*y3); //real trangle
			outtextxy(var+5*x2,ymax/2-6*y2,"B");

			line(var+5*x3,ymax/2-6*y3,var+5*x1,ymax/2-6*y1);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"c");
			//Solution of x-axis reflectoin
		
			line(var+5*x1,ymax/2+6*y1,var+5*x2, ymax/2+6*y2);//image trangle
			outtextxy(var+5*x1,ymax/2+6*y1,"A'");

			line(var+5*x2,ymax/2+6*y2,var+5*x3,ymax/2+6*y3); //image trangle
			outtextxy(var+5*x2,ymax/2+6*y2,"B'");

			line(var+5*x3,ymax/2+6*y3,var+5*x1,ymax/2+6*y1);//image trangle
			outtextxy(var+5*x3,ymax/2+6*y3,"c'");

			
			
		
		


			cout<<"Reflection on x-axis:"<<endl;
			cout<<"\nA(x1,-y1) :"<<x1<<","<<"-"<<y1;
			cout<<"\nB(x2,-y2) :"<<x2<<","<<"-"<<y2;
			cout<<"\nC(x3,-y3) :"<<x3<<","<<"-"<<y3;
		 }

		void ref_x_axis_rectangle()
		{
				xmax=getmaxx();
			ymax=getmaxy();
			
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
			cout<<"Point X4:";
			cin>>x4;
			cout<<"point Y4:";
			cin>>y4;

		
		line(var+5*x1,ymax/2-6*y1,var+5*x2, ymax/2-6*y2);//real trangle
			outtextxy(var+5*x1,ymax/2-6*y1,"A");

			line(var+5*x2,ymax/2-6*y2,var+5*x3,ymax/2-6*y3); //real trangle
			outtextxy(var+5*x2,ymax/2-6*y2,"B");

			line(var+5*x3,ymax/2-6*y3,var+5*x4,ymax/2-6*y4);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"C");
			
			line(var+5*x4,ymax/2-6*y4,var+5*x1,ymax/2-6*y1);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"D");
			
			cout<<"Given co-ordinates"<<endl;
			cout<<"\nA(x1,y1) :"<<x1<<","<<y1;
			cout<<"\nB(x2,y2) :"<<x2<<","<<y2;
			cout<<"\nC(x3,y3) :"<<x3<<","<<y3<<endl;
			cout<<"D(x4,x4)	  :"<<x4<<","<<y4<<endl;
			//Solution of x-axis reflectoin
			
			line(var+5*x1,ymax/2+6*y1,var+5*x2, ymax/2+6*y2);//image rectangle
			outtextxy(var+5*x1,ymax/2+6*y1,"A'");

			line(var+5*x2,ymax/2+6*y2,var+5*x3,ymax/2+6*y3); //image rectangle
			outtextxy(var+5*x2,ymax/2-6*y2,"B'");

			line(var+5*x3,ymax/2+6*y3,var+5*x4,ymax/2+6*y4);//image rectangle
			outtextxy(var+5*x3,ymax/2+6*y3,"C'");
			
			line(var+5*x4,ymax/2+6*y4,var+5*x1,ymax/2+6*y1);//image rectangle
			outtextxy(var+5*x3,ymax/2+6*y3,"D'");
			

			
			
		
		
		
		
			cout<<"Reflection on x-axis:"<<endl;
			cout<<"\nA(x1,-y1) :"<<x1<<","<<"-"<<y1;
			cout<<"\nB(x2,-y2) :"<<x2<<","<<"-"<<y2;
			cout<<"\nC(x3,-y3) :"<<x3<<","<<"-"<<y3;
			cout<<"\nD(x4,-y4) :"<<x4<<","<<"-"<<y4;
		}
		
		
	};

	class reflection_y_axis
	{
	private:
		int x,y,x1,x2,x3,y1,y2,y3,x4,y4,xmax,ymax;
	public:
		void ref_y_axis_single()
		{
			xmax=getmaxx();
			ymax=getmaxy();
			cout<<"enter the co-ordinates"<<endl;
			cout<<"x=";
			cin>>x1;
			cout<<"y=";
			cin>>y1;
			outtextxy(420+5*x1,ymax/2-6*y1,"A");  //real point
			circle(420+5*x1,ymax/2-6*y1,1);
			
			outtextxy(420-10*x1,ymax/2-10*y1,"A'");//image
			circle(420-5*x1,ymax/2-6*y1,1);
		}
		
		void ref_y_axis_traingle()
		{
			xmax=getmaxx();
			ymax=getmaxy();

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

			line(var+5*x1,ymax/2-6*y1,var+5*x2, ymax/2-6*y2);//real trangle
			outtextxy(var+5*x1,ymax/2-6*y1,"A");

			line(var+5*x2,ymax/2-6*y2,var+5*x3,ymax/2-6*y3); //real trangle
			outtextxy(var+5*x2,ymax/2-6*y2,"B");

			line(var+5*x3,ymax/2-6*y3,var+5*x1,ymax/2-6*y1);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"c");
			//Solution of y-axis reflectoin
		
			line(var-5*x1,ymax/2-6*y1,var-5*x2, ymax/2-6*y2);//image trangle
			outtextxy(var-5*x1,ymax/2-6*y1,"A'");

			line(var-5*x2,ymax/2-6*y2,var-5*x3,ymax/2-6*y3); //image trangle
			outtextxy(var-5*x2,ymax/2-6*y2,"B'");

			line(var-5*x3,ymax/2-6*y3,var-5*x1,ymax/2-6*y1);//image trangle
			outtextxy(var-5*x3,ymax/2-6*y3,"c'");

			
			
		
		


			cout<<"Reflection on y-axis:"<<endl;
			cout<<"\nA(-x1,sy1) :"<<x1<<","<<"-"<<y1;
			cout<<"\nB(-x2,y2) :"<<x2<<","<<"-"<<y2;
			cout<<"\nC(-x3,y3) :"<<x3<<","<<"-"<<y3;
		 }

		void ref_y_axis_rectangle()
		{
				xmax=getmaxx();
			ymax=getmaxy();
			
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
			cout<<"Point X4:";
			cin>>x4;
			cout<<"point Y4:";
			cin>>y4;

		
		line(var+5*x1,ymax/2-6*y1,var+5*x2, ymax/2-6*y2);//real trangle
			outtextxy(var+5*x1,ymax/2-6*y1,"A");

			line(var+5*x2,ymax/2-6*y2,var+5*x3,ymax/2-6*y3); //real trangle
			outtextxy(var+5*x2,ymax/2-6*y2,"B");

			line(var+5*x3,ymax/2-6*y3,var+5*x4,ymax/2-6*y4);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"C");
			
			line(var+5*x4,ymax/2-6*y4,var+5*x1,ymax/2-6*y1);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"D");
			
			cout<<"\nGiven co-ordinates"<<endl;
			cout<<"\nA(x1,y1) :"<<x1<<","<<y1;
			cout<<"\nB(x2,y2) :"<<x2<<","<<y2;
			cout<<"\nC(x3,y3) :"<<x3<<","<<y3<<endl;
			cout<<"D(x4,x4)	  :"<<x4<<","<<y4<<endl;
			//Solution of y-axis reflectoin
			
			line(var-5*x1,ymax/2-6*y1,var-5*x2, ymax/2-6*y2);//image rectangle
			outtextxy(var-5*x1,ymax/2-6*y1,"A'");

			line(var-5*x2,ymax/2-6*y2,var-5*x3,ymax/2-6*y3); //image rectangle
			outtextxy(var-5*x2,ymax/2-6*y2,"B'");

			line(var-5*x3,ymax/2-6*y3,var-5*x4,ymax/2-6*y4);//image rectangle
			outtextxy(var-5*x3,ymax/2-6*y3,"C'");
			
			line(var-5*x4,ymax/2-6*y4,var-5*x1,ymax/2-6*y1);//image rectangle
			outtextxy(var-5*x3,ymax/2-6*y3,"D'");
			

			
			
		
		
		
		
			cout<<"Reflection on y-axis:"<<endl;
			cout<<"\nA(-x1,y1) :"<<x1<<","<<"-"<<y1;
			cout<<"\nB(-x2,y2) :"<<x2<<","<<"-"<<y2;
			cout<<"\nC(-x3,y3) :"<<x3<<","<<"-"<<y3;
			cout<<"\nD(-x4,y4) :"<<x4<<","<<"-"<<y4;
		}
		
		
	};
	
		class reflection_y_equals_to_nev_x
	{
	private:
		int x,y,x1,x2,x3,y1,y2,y3,x4,y4,xmax,ymax;
	public:
		void ref_y_equals_to_nev_x_single()
		{
			xmax=getmaxx();
			ymax=getmaxy();
			cout<<"enter the co-ordinates"<<endl;
			cout<<"x=";
			cin>>x1;
			cout<<"y=";
			cin>>y1;
			outtextxy(420+5*x1,ymax/2-6*y1,"A");  //real point
			circle(420+5*x1,ymax/2-6*y1,1);
			
			outtextxy(420-5*y1,ymax/2+10*x1,"A'");//image
			circle(420-5*y1,ymax/2+6*x1,1);
		}
		
		void ref_y_equals_to_nev_x_traingle()
		{
			xmax=getmaxx();
			ymax=getmaxy();

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

			line(var+5*x1,ymax/2-6*y1,var+5*x2, ymax/2-6*y2);//real trangle
			outtextxy(var+5*x1,ymax/2-6*y1,"A");

			line(var+5*x2,ymax/2-6*y2,var+5*x3,ymax/2-6*y3); //real trangle
			outtextxy(var+5*x2,ymax/2-6*y2,"B");

			line(var+5*x3,ymax/2-6*y3,var+5*x1,ymax/2-6*y1);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"c");
			//Solution of y=-x reflectoin
		
			line(var-5*y1,ymax/2+6*x1,var-5*y2, ymax/2+6*x2);//image trangle
			outtextxy(var-5*y1,ymax/2+6*x1,"A'");

			line(var-5*y2,ymax/2+6*x2,var-5*y3,ymax/2+6*x3); //image trangle
			outtextxy(var-5*y2,ymax/2+6*x2,"B'");

			line(var-5*y3,ymax/2+6*x3,var-5*y1,ymax/2+6*x1); //image trangle
			outtextxy(var-5*y2,ymax/2+6*x2,"C'");

			
			
		
		


			cout<<"Reflection on y=-x:"<<endl;
			cout<<"\nA(-x1,-y1) :"<<x1<<","<<"-"<<y1;
			cout<<"\nB(-x2,-y2) :"<<x2<<","<<"-"<<y2;
			cout<<"\nC(-x3,-y3) :"<<x3<<","<<"-"<<y3;
		 }

		void ref_y_equals_to_nev_x_rectangle()
		{
				xmax=getmaxx();
			ymax=getmaxy();
			
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
			cout<<"Point X4:";
			cin>>x4;
			cout<<"point Y4:";
			cin>>y4;

		
		line(var+5*x1,ymax/2-6*y1,var+5*x2, ymax/2-6*y2);//real trangle
			outtextxy(var+5*x1,ymax/2-6*y1,"A");

			line(var+5*x2,ymax/2-6*y2,var+5*x3,ymax/2-6*y3); //real trangle
			outtextxy(var+5*x2,ymax/2-6*y2,"B");

			line(var+5*x3,ymax/2-6*y3,var+5*x4,ymax/2-6*y4);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"C");
			
			line(var+5*x4,ymax/2-6*y4,var+5*x1,ymax/2-6*y1);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"D");
			
			cout<<"Given co-ordinates"<<endl;
			cout<<"\nA(x1,y1) :"<<x1<<","<<y1;
			cout<<"\nB(x2,y2) :"<<x2<<","<<y2;
			cout<<"\nC(x3,y3) :"<<x3<<","<<y3<<endl;
			cout<<"D(x4,x4)	  :"<<x4<<","<<y4<<endl;
			//Solution of y=-x reflectoin
			
			line(var-5*y1,ymax/2+6*x1,var-5*y2, ymax/2+6*x2);//image rectangle
			outtextxy(var-5*y1,ymax/2+6*x1,"A'");

				line(var-5*y2,ymax/2+6*x2,var-5*y3, ymax/2+6*x3);//image rectangle
			outtextxy(var-5*y2,ymax/2+6*x2,"B'");

				line(var-5*y3,ymax/2+6*x3,var-5*y4, ymax/2+6*x4);//image rectangle
			outtextxy(var-5*y3,ymax/2+6*x3,"C'");
			
				line(var-5*y4,ymax/2+6*x4,var-5*y1, ymax/2+6*x1);//image rectangle
			outtextxy(var-5*y4,ymax/2+6*x4,"D'");
			

			
			
		
		
		
		
			cout<<"Reflection on y=-x:"<<endl;
			cout<<"\nA(-x1,-y1) :"<<x1<<","<<"-"<<y1;
			cout<<"\nB(-x2,-y2) :"<<x2<<","<<"-"<<y2;
			cout<<"\nC(-x3,-y3) :"<<x3<<","<<"-"<<y3;
			cout<<"\nD(-x4,-y4) :"<<x4<<","<<"-"<<y4;
		}
		
		
	};

	
		class reflection_y_equals_to_x
	{
	private:
		int x,y,x1,x2,x3,y1,y2,y3,x4,y4,xmax,ymax;
	public:
		void ref_y_equals_to_x_single()
		{
			xmax=getmaxx();
			ymax=getmaxy();
			cout<<"enter the co-ordinates"<<endl;
			cout<<"x=";
			cin>>x1;
			cout<<"y=";
			cin>>y1;
			outtextxy(420+5*x1,ymax/2-6*y1,"A");  //real point
			circle(420+5*x1,ymax/2-6*y1,1);
			
			outtextxy(420+5*y1,ymax/2-10*x1,"A'");//image
			circle(420+5*y1,ymax/2-6*x1,1);
		}
		
		void ref_y_equals_to_x_traingle()
		{
			xmax=getmaxx();
			ymax=getmaxy();

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

			line(var+5*x1,ymax/2-6*y1,var+5*x2, ymax/2-6*y2);//real trangle
			outtextxy(var+5*x1,ymax/2-6*y1,"A");

			line(var+5*x2,ymax/2-6*y2,var+5*x3,ymax/2-6*y3); //real trangle
			outtextxy(var+5*x2,ymax/2-6*y2,"B");

			line(var+5*x3,ymax/2-6*y3,var+5*x1,ymax/2-6*y1);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"c");
			//Solution of y=-x reflectoin
		
			line(var+5*y1,ymax/2-6*x1,var+5*y2, ymax/2-6*x2);//image trangle
			outtextxy(var+5*y1,ymax/2-6*x1,"A'");

			line(var+5*y2,ymax/2-6*x2,var+5*y3,ymax/2-6*x3); //image trangle
			outtextxy(var+5*y2,ymax/2-6*x2,"B'");

			line(var+5*y3,ymax/2-6*x3,var+5*y1,ymax/2-6*x1); //image trangle
			outtextxy(var+5*y2,ymax/2-6*x2,"C'");

			
			
		
		


			cout<<"Reflection on y=x:"<<endl;
			cout<<"\nA(y1,x1) :"<<x1<<","<<"-"<<y1;
			cout<<"\nB(y2,x2) :"<<x2<<","<<"-"<<y2;
			cout<<"\nC(y3,x3) :"<<x3<<","<<"-"<<y3;
		 }

		void ref_y_equals_to_x_rectangle()
		{
				xmax=getmaxx();
			ymax=getmaxy();
			
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
			cout<<"Point X4:";
			cin>>x4;
			cout<<"point Y4:";
			cin>>y4;

		
		line(var+5*x1,ymax/2-6*y1,var+5*x2, ymax/2-6*y2);//real trangle
			outtextxy(var+5*x1,ymax/2-6*y1,"A");

			line(var+5*x2,ymax/2-6*y2,var+5*x3,ymax/2-6*y3); //real trangle
			outtextxy(var+5*x2,ymax/2-6*y2,"B");

			line(var+5*x3,ymax/2-6*y3,var+5*x4,ymax/2-6*y4);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"C");
			
			line(var+5*x4,ymax/2-6*y4,var+5*x1,ymax/2-6*y1);//real trangle
			outtextxy(var+5*x3,ymax/2-6*y3,"D");
			
			cout<<"Given co-ordinates"<<endl;
			cout<<"\nA(x1,y1) :"<<x1<<","<<y1;
			cout<<"\nB(x2,y2) :"<<x2<<","<<y2;
			cout<<"\nC(x3,y3) :"<<x3<<","<<y3<<endl;
			cout<<"D(x4,x4)	  :"<<x4<<","<<y4<<endl;
			//Solution of y=x reflectoin
			
			line(var+5*y1,ymax/2-6*x1,var+5*y2, ymax/2-6*x2);//image rectangle
			outtextxy(var+5*y1,ymax/2-6*x1,"A'");

				line(var+5*y2,ymax/2-6*x2,var+5*y3, ymax/2-6*x3);//image rectangle
			outtextxy(var+5*y2,ymax/2-6*x2,"B'");

				line(var+5*y3,ymax/2-6*x3,var+5*y4, ymax/2-6*x4);//image rectangle
			outtextxy(var+5*y3,ymax/2-6*x3,"C'");
			
				line(var+5*y4,ymax/2-6*x4,var+5*y1, ymax/2-6*x1);//image rectangle
			outtextxy(var+5*y4,ymax/2-6*x4,"D'");
			

			
			
		
		
		
		
			cout<<"Reflection on y=x:"<<endl;
			cout<<"\nA(y1,x1) :"<<x1<<","<<"-"<<y1;
			cout<<"\nB(y2,x2) :"<<x2<<","<<"-"<<y2;
			cout<<"\nC(y3,x3) :"<<x3<<","<<"-"<<y3;
			cout<<"\nD(y4,x4) :"<<x4<<","<<"-"<<y4;
		}
		
		
	};
class option_reflection
	{
		public:
		void BasicOption1()
		{
		 int gm,gd=DETECT;
		initgraph(&gd,&gm,"c:\\turboc3\\bgi");

			setcolor(14);
			settextstyle(2 ,HORIZ_DIR,6);
			outtextxy(130,100,"->> OPTIONS");
			setcolor(7);
			outtextxy(170,130,"	#1 single co_ordinate");
			outtextxy(170,150,"	#2 Triangle");
			outtextxy(170,170,"	#3 Rectangle");
		   //	outtextxy(170,190,"	#4 Lines");
			outtextxy(300,400,"MAIN MENUE: Press '5'");
		}


	void reflect_choice()
	{
			 int gm,gd=DETECT;
			initgraph(&gd,&gm,"c:\\turboc3\\bgi");

			setcolor(14);
			settextstyle(2 ,HORIZ_DIR,6);
			outtextxy(130,100,"->> Reflection");
			setcolor(7);
			outtextxy(170,130,"	#1 reflection on x-axis");
			outtextxy(170,150,"	#2 reflection on y-axis");
			outtextxy(170,170,"	#3 reflection on y= -x");
			outtextxy(170,190,"	#4 reflecton on y=x");
			outtextxy(300,400,"MAIN MENUE: Press '5'");
		}
		void reflect_points()
		{
			 int gm,gd=DETECT;
		initgraph(&gd,&gm,"c:\\turboc3\\bgi");

			setcolor(14);
			settextstyle(2 ,HORIZ_DIR,6);
			outtextxy(130,100,"->> OPTIONS");
			setcolor(7);
			outtextxy(170,130,"	#1 Single co-ordinates");
			outtextxy(170,150,"	#2 Traingle");
			outtextxy(170,170,"	#3 Rectangle");
		       //	outtextxy(170,190,"	#4 reflecton on y=x");
			outtextxy(300,400,"MAIN MENUE: Press '5'");
		}

		void design();
};
void option_reflection:: design()
		{
			setcolor(7);
			outtextxy(150,150,"||");
			outtextxy(150,170,"||");
			outtextxy(150,190,"||");
			outtextxy(150,210,"||");
			outtextxy(150,230,"||");
			outtextxy(130,220,"=================");
			int r=1;
			while(!kbhit())
			{
				setcolor(r);
				settextstyle(0,0,1);
				outtextxy(160,260,"Choose the Option(1-4):");
				delay(500);
				r++;
			}

 }
class reflection
{
private:
	char choice3;
	char choice3_1;
public:
void Fun_reflection()
{
graphLine g;
reflection_x_axis r;
reflection_y_axis r1;
option_reflection e;
reflection_y_equals_to_nev_x r2;// reflectoin on y=-x
reflection_y_equals_to_x r3;// reflectoin on y=x
top:
e.reflect_choice();
e.design();

//system("cls");
/*g.X_axis();
g.Y_axis();
g.Axis_side();
r.ref_x_axis();
*/

choice3=getche();
	switch(choice3)
	{
				case '1':
						{

							cout<<"reflectoin of x-axis"; //
							Back_To_X_axis:
							e.reflect_points();
							choice3_1=getche();

							switch(choice3_1)
							{
										case '1':
											{
											g.X_axis();
											g.Y_axis();
											g.Axis_side();
											r.ref_x_axis_single();	// reflection on x-axis  single line
											getch();
											goto Back_To_X_axis;
											//break;
											}			
		

			       
										case '2':// reflection on x-axis traingle
											{
											g.X_axis();
											g.Y_axis();
											g.Axis_side();
											r.ref_x_axis_traingle();
											getch();
											goto Back_To_X_axis;
											//break;
											}

									      case '3':		//Reflection on x-axis Rectangle
												{
												g.X_axis();
												g.Y_axis();
												g.Axis_side();
												r.ref_x_axis_rectangle();
												getch();
												goto Back_To_X_axis;
												//break;
												}
											case'4':
												{
													goto top;
												}

									   		default:
													{
													cout<<"wrong choice"<<endl;
													delay(1000);
													goto Back_To_X_axis;
						
													}
								}
		  				//break;
		  			
		  				//goto top;
				  }
	      

		  
			case '2':
		{
		cout<<"reflectoin of y-axis";
							e.reflect_points();
							choice3_1=getche();
							Back_to_Y_axis:

							switch(choice3_1)
							{
										case '1':
											{
											g.X_axis();
											g.Y_axis();
											g.Axis_side();
											r1.ref_y_axis_single();	// reflection on y-axis  single line
											getch();
											goto Back_to_Y_axis;
											//break;
											}			
		

			       
										case '2':// reflection on y-axis traingle
											{
											g.X_axis();
											g.Y_axis();
											g.Axis_side();
											r1.ref_y_axis_traingle();
											getch();
											goto Back_to_Y_axis;
											//break;
											}

									      case '3':		//Reflection on y-axis Rectangle
												{
												g.X_axis();
												g.Y_axis();
												g.Axis_side();
												r1.ref_y_axis_rectangle();
												getch();
												goto Back_to_Y_axis;
												//break;
												}
										case'4':
												{
													goto top;
												}
											

									   		default:
													{
													cout<<"wrong choice"<<endl;
													delay(1000);
													goto Back_to_Y_axis;
						
													}
									}
					  				//break;
				
						//goto top;
					}
		case '3':
		{
		cout<<"reflectoin on y=-x"<<endl;
	
							e.reflect_points();
							choice3_1=getche();
							Back_to_NegY:
							switch(choice3_1)
							{
										case '1':
											{
											g.X_axis();
											g.Y_axis();
											g.Axis_side();
											r2.ref_y_equals_to_nev_x_single();	// reflection on y=-x  single line
											getch();
											goto Back_to_NegY;
											//break;
											}			
		

			       
										case '2':// reflection on y=-x traingle
											{
											g.X_axis();
											g.Y_axis();
											g.Axis_side();
											r2.ref_y_equals_to_nev_x_traingle();
											getch();
											goto Back_to_NegY;
											//break;
											}

									      case '3':		//Reflection on y=-x Rectangle
												{
												g.X_axis();
												g.Y_axis();
												g.Axis_side();
												r2.ref_y_equals_to_nev_x_rectangle();
												getch();
												goto Back_to_NegY;
												//break;
												}

									   		default:
													{
													cout<<"wrong choice"<<endl;
													delay(1000);
													goto Back_to_NegY;
						
													}
									}
					  				break;
				
				goto top;
		}
		

 	case '4':
		{
		cout<<"reflectoin on y=x"<<endl;
	
							e.reflect_points();
							choice3_1=getche();
							Back_To_PosX:
							switch(choice3_1)
							{
										case '1':
											{
											g.X_axis();
											g.Y_axis();
											g.Axis_side();
											r3.ref_y_equals_to_x_single();	// reflection on y=x  single line
											getch();
											Back_To_PosX;
											//break;
											}			
		

			       
										case '2':// reflection on y=x traingle
											{
											g.X_axis();
											g.Y_axis();
											g.Axis_side();
											r3.ref_y_equals_to_x_traingle();
											getch();
											Back_To_PosX;
											//break;
											}

									      case '3':		//Reflection on y=x Rectangle
												{
												g.X_axis();
												g.Y_axis();
												g.Axis_side();
												r3.ref_y_equals_to_x_rectangle();
												getch();
												Back_To_PosX;
												//break;
												}
											case'4':
												{
													goto top;
												}

									   		default:
													{
													cout<<"wrong choice"<<endl;
													delay(1000);
													Back_To_PosX;
						
													}
									}
					  			//	break;
				
			//	goto top;
		}
		case'5':
			{
				break;
			}
		
		
		default:
		{
		cout<<" wrong choice"<<endl;
	       delay(1000);
		goto top;
		 } 


}

	}
//getch();

}
#endif
