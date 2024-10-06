#include <iostream>
#include <windows.h>
using namespace std; 

void gotoxy(int x, int y);
void printHeader();
void maze();
void player();
void erasePlayer();
void movePlayerRight();
void movePlayerLeft();
void movePlayerDown();
void movePlayer1();
void movePlayer2();

int pX=3,pY=16;

int main()
{
    
    system("cls");

    printHeader();  
    maze();
    player();          
    
    while(true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }
    	
	
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePlayerDown();
        }
    }
}    

void printHeader()
{
 cout<< R"(     /$$$$$$                                   /$$          /$$$$$$                             /$$$$$$             /$$       /$$       )"<<endl;
 cout<< R"(    /$$__  $$                                 | $$         /$$__  $$                           /$$__  $$           | $$      | $$       )"<<endl;
 cout<< R"(   | $$  \ $$ /$$   /$$  /$$$$$$   /$$$$$$$ /$$$$$$       | $$   \__  /$$$$$$    /$$$$$$      | $$   \__/  /$$$$$$ | $$  /$$$$$$$       )"<<endl;
 cout<< R"(   | $$  | $$| $$  | $$ /$$__  $$ /$$_____/ |_  $$_/      | $$$$      $$ __  $$ /$$__  $$     | $$ /$$$$  /$$__  $$| $$ /$$__  $$       )"<<endl;
 cout<< R"(   | $$  | $$| $$  | $$| $$$$$$$$|  $$$$$$   | $$         | $$_/    | $$   \ $$| $$  \__/     | $$|_  $$ | $$  \ $$| $$| $$  | $$       )"<<endl;
 cout<< R"(   | $$/$$ $$| $$  | $$| $$_____/ \____  $$  | $$ /$$     | $$      | $$   | $$| $$           | $$  \  $$| $$  | $$| $$| $$  | $$       )"<<endl;
 cout<< R"(   | $$/$$ $$| $$  | $$| $$_____/ \____  $$  | $$ /$$     | $$      | $$   | $$| $$           | $$  \  $$| $$  | $$| $$| $$  | $$       )"<<endl;
 cout<< R"(   |  $$$$$$/|  $$$$$$/|  $$$$$$$ /$$$$$$$/  |  $$$$ /    | $$      | $$$$$$/| $$             |  $$$$$$/ |  $$$$$$/| $$|  $$$$$$$       )"<<endl;
 cout<< R"(    \___ $$$  \______/ \_______/|_______/     \_____/     | $$       \______/  |__/           \______/    \______/ |__/ \_______/       )"<<endl;
 cout<< R"(         \__/                                                                                                                           )"<<endl;
}

void maze()
{
         gotoxy(0,15);

    cout<<"###################################################################################   "<<endl;
    cout<<"##                                                                               ##   "<<endl; 
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"####################################################################             ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;    
    cout<<"######################################            #################################   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##          ##########################################################           ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                          #######################################################   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"######################################################################           ##  "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"##                                                                               ##   "<<endl;
    cout<<"######################################            #################################   "<<endl;
    cout<<"##    __\\/__                                                                     ##   "<<endl;
    cout<<"##  /        \\                                                                   ##   "<<endl;
    cout<<"## |   GOLD   |                                                                  ##   "<<endl;
    cout<<"##  \\        /                                                                   ##   "<<endl;
    cout<<"##   \\ ____ /                                                                    ##   "<<endl;
    cout<<"###################################################################################   "<<endl;

}


void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void player()
{
    gotoxy(pX,pY);
    cout<<" o "<<endl;
    gotoxy(pX,pY+1);
    cout<<"/|\\:::o"<<endl;
    gotoxy(pX,pY+2);
    cout<<"/ \\ "<<endl;

    Sleep(50);
}

void erasePlayer()
{
    gotoxy(pX,pY);
    cout << "           ";
    gotoxy(pX,pY+1);
    cout << "           ";
    gotoxy(pX,pY+2);
    cout << "           ";
    gotoxy(pX,pY+3);
    cout << "           ";
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void movePlayer1()
{
    gotoxy(pX,pY);
    cout<<" o "<<endl;
    gotoxy(pX,pY+1);
    cout<<"/|\\:::o"<<endl;
    gotoxy(pX,pY+2);
    cout<<" |\\ "<<endl;

    Sleep(50);
}

void movePlayer2()
{
    gotoxy(pX,pY);
    cout<<" o "<<endl;
    gotoxy(pX,pY+1);
    cout<<"/|\\:::o"<<endl;
    gotoxy(pX,pY+2);
    cout<<"/| "<<endl;

    Sleep(50);
}

void movePlayerLeft()
{
    erasePlayer();
    pX = pX - 1;
    movePlayer1();
    movePlayer2();
    player();
}

void movePlayerRight()
{
    erasePlayer();
    pX = pX + 1;
    movePlayer1();
    movePlayer2();
    player();
}

void movePlayerDown()
{
    erasePlayer();
    pY = pY + 1;
    player();	

}