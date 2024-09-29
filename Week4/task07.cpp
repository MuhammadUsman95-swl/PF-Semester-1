#include <iostream>
#include <windows.h>
using namespace std;
void printMaza();
void gotoxy(int x , int y);
void moveplayer(int x,int y);

main ()
{ 
	int x=10 , y=1;
	system("cls");
	printMaza();
	moveplayer(x,y);
}

void moveplayer(int x,int y)
{	
    while(true)
    {
	gotoxy(x,y);
	cout<<"p";
	Sleep(400);
	gotoxy(x,y);
	cout<<" ";
	y++;
	if(y==9)
	{	
	    while(true)
	      {	gotoxy(x,y);
		cout<<"p";
		Sleep(400);
		gotoxy(x,y);
		cout<<" ";
		y--;
		if(y==1)
		   { 
		     moveplayer(x,y); 
		   }
	      }	
	 }
     }
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void printMaza()
{
cout<<"#######################################   "<<endl;
cout<<"#                                     #   "<<endl;
cout<<"#                                     #   "<<endl;
cout<<"#                                     #   "<<endl;
cout<<"#                                     #   "<<endl;
cout<<"#                                     #	 "<<endl;
cout<<"#                                     #   "<<endl;
cout<<"#                                     #   "<<endl;
cout<<"#                                     #   "<<endl;
cout<<"#                                     #   "<<endl;
cout<<"#                                     #   "<<endl;
cout<<"#######################################   "<<endl;

}

