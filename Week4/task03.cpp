#include <iostream>
#include <windows.h>
using namespace std;

void printMaza();
void gotoxy(int x , int y);
void movePlayer(int x,int y);

main ()
{ 
	int x=4, y=4;
	system("cls");
	printMaza();
	movePlayer(x,y);
}

void movePlayer(int x,int y)
{	gotoxy(x,y);
	cout<<"p";
	Sleep(200);
	gotoxy(x,y);
	cout<<" ";

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


void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = y;
 coordinates.Y = x;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


