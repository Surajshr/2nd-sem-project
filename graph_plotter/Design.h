#ifndef DESIGN_H
#define DESIGN_H
class designs
{
	private:
		int x,y,i;
	public:
		void X_axis();
		void Y_axis();
		void Side_Axis();
		void graphs();
		
};
void designs::Side_Axis()
{
	y=getmaxy();
	x=getmaxx();
	outtextxy(420+5,y/2+5,"0");	//origin
	outtextxy(420-15,5,"Y");	//point of y-axis
	outtextxy(x-10,y/2-10,"X");	//point of x-axis
	outtextxy(420+10,y-25,"-Y");	//point of negative x-axis
	outtextxy(205,y/2-10,"-X"); 	// point of negative y-axis
}
void designs::X_axis()
{
	int var=420;

	//int gd=DETECT,gm;
	//initgraph(&gd,&gm,"C:\\turboc3\\BGI");
	y=getmaxy();
	   for(i=0;i<=y;i=i+6)
		{
			   line(var-2,5+i,var+2,5+i); //vertical points
		}
		line(var,0,var,y);		//line of y-axis
		line(200,0,200,y);             //side lines
}
void designs::Y_axis()
{
	int x,y,i;
		y=getmaxy();
		x=getmaxx();
		for(i=200;i<=x;i=i+5)
		{
			 line(5+i,y/2-2,5+i,y/2+2);    //hoizental points
		}
		line(200,y/2,x,y/2);		// line of x-axis
	
}
void designs::graphs()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\turboc3\\BGI");
		
}
class Graph_Design
{
	public:
		void functions()
		{
		
			designs ds;
			//Rotation ro;
			
			ds.Side_Axis();
			ds.X_axis();
			ds.Y_axis();
			//ro.TakeData();
	    }  
};
#endif

