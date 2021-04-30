#ifndef PAGE_H
#define PAGE_H


class First_page
{
	private:
		int	s;
	public:
		void Page1();
		void Graph();
		void Main_Menue();
		void Main_Error_message();
		void Main_Side_Lines();
};
void First_page::Page1()
		{
			setcolor(9);
			settextstyle(7,0,4);
			outtextxy(148,180,"....Welcome To ");
			outtextxy(240,240,"''Graph Plotter......''");
			setcolor(YELLOW);
			setfillstyle(SOLID_FILL,YELLOW);
    //	cleardevice();
		}

void First_page::Main_Menue()
{
		setcolor(14);
		settextstyle(2 ,HORIZ_DIR,6);
		outtextxy(130,100,"->> CHOSE TASK :: ");
		setcolor(5);
		outtextxy(210,130,"	#1 BASIC");
		outtextxy(210,160,"	#2 ROTATION");
		outtextxy(210,190,"	#3 REFLECTION");
		outtextxy(210,220,"	#4 ABOUT");
		outtextxy(210,250,"	#5 EXIT");
		       //	setcolor(6);
		      //	outtextxy(130,280,"===============================================");
		setcolor(14);
		outtextxy(200,310,"Enter your Choice(1-5) :: ");
}
void First_page::Main_Side_Lines()
{
	// TOP TO DOWN LINE//
			setcolor(5);
			outtextxy(170,120,"||");
			outtextxy(170,140,"||");
			outtextxy(170,160,"||");
			outtextxy(170,180,"||");
			outtextxy(170,200,"||");
			outtextxy(170,220,"||");
			outtextxy(170,240,"||");
			outtextxy(170,260,"||");
			outtextxy(170,280,"||");
			outtextxy(170,300,"||");
			outtextxy(170,320,"||");
			//RIGHT TO LEFT LINE//
			outtextxy(160,280,"===========================");
	
}
void First_page::Main_Error_message()
{
	setcolor(RED);
	outtextxy(200,340,"[ Error:]:Enter correct option");
}
void First_page::Graph()
{
	int gm,gd=DETECT;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

}
#endif //end;
