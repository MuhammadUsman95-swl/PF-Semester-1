#include <iostream>
#include <windows.h>
using namespace std;
void printMaza();
void gotoxy(int x , int y);
void movePlayer(int x,int y);

main ()
{ 
	int x=4 , y=4;
	system("cls");
	printMaza();
	while(true)
	{
		movePlayer(x,y);
		x=x+1;
		if(x == 30)
		{
	            x=4;
	        }
	}
}

void movePlayer(int x,int y)
{	
	gotoxy(x,y);
	cout<<"p";
	Sleep(200);
	gotoxy(x,y);
	cout<<" ";

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
cout<<"#######################################   "<<endl;

}

