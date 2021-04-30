#ifndef BASIC_H
#define BASIC_H
class Options
{
	private:
		int x,y,r;
	public:
		void Basic_Options();
		void Basic_Option_Design();
		void Basic_Circle();
		void Basic_Triangle();
		void Basic_Lines();
		
		//void Basic_Triangle();
		//void Basic_Rectangle();
		//void Basic_Line();
};
		void Options::Basic_Options()
		{
			setcolor(14);
			settextstyle(2 ,HORIZ_DIR,6);
			outtextxy(130,100,"->> OPTIONS");
			setcolor(7);
			//outtextxy(170,130,"	#1 Rectangle");
			outtextxy(170,150,"	#1 Circle");
			outtextxy(170,170,"	#2 Triangle");
			outtextxy(170,190,"	#3 Lines");
			outtextxy(300,400,"MAIN MENUE: Press '5'");
		}
		void Options::Basic_Option_Design()
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
				outtextxy(160,260,"Chose the Option(1-4):");
				delay(500);
				r++;
			}
		}
		void Options::Basic_Circle()
		{
			//int gd=DETECT,gm;
			//initgraph(&gd,&gm,"C:\\turboc3\\BGI");
			cout<<"->>> Enter Points  <<<-"<<endl;
			//outtextxy(10,5,"## Enter Points::");
			cout<<"\nX-axis::";
			/*cout<<""<<endl;
			outtextxy(10,15,"X-axis::");*/
			cin>>x;
			cout<<"Y-axis::";
			cin>>y;
			cout<<"Enter Rdious::";
			cin>>r;
			int var=420;
			int xmax,ymax;
			//xmax=getmaxx();
			ymax=getmaxy();
			//circle(xmax/2+10*x,ymax/2-10*y,r);
			circle(var+5*x,ymax/2-6*y,r*6);
		    circle(var+5*x,ymax/2-6*y,1.5);
		    //	cout<<"\nCenter(x,y):"<<x<<","<<y;
		      //	cout<<"\nRadious    :"<<r;
		 
		}
		void Options::Basic_Triangle()
		{
			int x1,x2,x3,y1,y2,y3;
			int xmax,ymax;
			cout<<"->>> Enter Points  <<<-"<<endl;
			cout<<"Point X1::";
			cin>>x1;
			cout<<"Point Y1::";
			cin>>y1;
			cout<<"Point X2::";
			cin>>x2;
			cout<<"Point Y2::";
			cin>>y2;
			cout<<"Point X3::";
			cin>>x3;
			cout<<"point Y3::";
			cin>>y3;
			//xmax=getmaxx();
			ymax=getmaxy();
			int var=420;
		   /*	line(xmax/2+10*x1,ymax/2-10*y1,xmax/2+10*x2,ymax/2-10*y2);
			line(xmax/2+10*x2,ymax/2-10*y2,xmax/2+10*x3,ymax/2-10*y3);
			line(xmax/2+10*x3,ymax/2-10*y3,xmax/2+10*x1,ymax/2-10*y1);*/
			line(var+5*x1,ymax/2-6*y1,var+5*x2, ymax/2-6*y2);
			line(var+5*x2,ymax/2-6*y2,var+5*x3,ymax/2-6*y3);
			line(var+5*x3,ymax/2-6*y3,var+5*x1,ymax/2-6*y1);
			//cout<<"\n(x1,y1) :"<<x1<<","<<y1;
			//cout<<"\n(x2,y2) :"<<x2<<","<<y2;
			//cout<<"\n(x3,y3) :"<<x3<<","<<y3;
		}
		void Options::Basic_Lines()
		{
			int x1=0,y1=0;
			int y;
			int x2,y2;
			int var=420;
			int xmax,ymax;
			int j;

		       //	xmax=getmaxx();
			ymax=getmaxy();
			char ch;
			do
			{
			cout<<" ->>> Enter Points  <<<-"<<endl;

			cout<<" Point (x)::";
			cin>>x2;
			cout<<" Point (y)::";
			cin>>y2;

			line(var+5*x1,ymax/2-6*y1,var+5* x2, ymax/2-6*y2);
			x1=x2;
			y1=y2;
			outtextxy(var+5*x1,ymax/2-6*y1,"p");
			circle(var+5*x1,ymax/2-6*y1,1.5);
			cout<<" Any points(Y/N)?"<<endl;
			ch=getch();
			}
			while(ch=='Y'||ch=='y');
		}
class Basic_Graph
{
	private:
		//char choice;
		int abs;
	public:
		void Chose_Options();
};
		void Basic_Graph::Chose_Options()
		{
			    Options op; // creating an obj of nested Options class
			    Graph_Design GR;
				char choice;
				
				Back_to_basic:
				//system("cls");
				
				cleardevice();
				graphdefaults();	
				op.Basic_Options();
				op.Basic_Option_Design();
			 	choice=getche();
				 switch(choice)
			 	{
					case'1':
					{	
						cleardevice();
						//Graph_Design GR;
						GR.functions();
						op.Basic_Circle();
						//getch();
					break;
					}
					case '2':
						{
							cleardevice();
						//	Graph_Design GR;
							GR.functions();
							op.Basic_Triangle();
					break;
						}
					case '3':
						{
							cleardevice();
							GR.functions();
							op.Basic_Lines();
							
						break;
						}
					default:
						First_page fr;
						fr.Main_Error_message();
						delay(1000);
						goto Back_to_basic;
						
				}
					
				
		}

#endif
