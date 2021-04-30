#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>

#include "first.h"
#include "Design.h"
#include "Basic.h"
#include "rotating.h"
#include "refll.h"
//static const int var=420;
void main()
{
 //rotating ROTATING;
 Fun_Rotating FUN_ROTATING;
 Basic_Graph BASIC_GRAPH;
 First_page FIRST_PAGE;
 Graph_Design GRAPH_DESIGN;
 reflection REFLECTION;
 char First_Choice;

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\turboc3\\BGI");
 FIRST_PAGE.Page1();
 Back_To_Main:
 cleardevice();
graphdefaults();
 FIRST_PAGE.Main_Menue();
 //getch();
 FIRST_PAGE.Main_Side_Lines();
 First_Choice=getche();
 switch(First_Choice)
 {
 	case'1':
 		{
 			cleardevice();
 			graphdefaults();
 			BASIC_GRAPH.Chose_Options();
 			goto Back_To_Main;
        }
    case '2':
    	{
    		cleardevice();
    		graphdefaults();
    		FUN_ROTATING.All_operation();
    		goto Back_To_Main;
		}
	case'3':
		{
			cleardevice();
			graphdefaults();
			REFLECTION.Fun_reflection();
			//getch();
			goto Back_To_Main;
		}
	case '4':
		{
			cleardevice();
			graphdefaults();
			cout<<"this part is also in under construction";
			getch();
			goto Back_To_Main;
		}
	case'5':
		{
			exit(0);
		}
	default:
		{
			FIRST_PAGE.Main_Error_message();
			delay(1000);
			goto Back_To_Main;
		}
 }

// getch();
}
