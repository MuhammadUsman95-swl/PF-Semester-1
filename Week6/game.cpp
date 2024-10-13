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
void movePlayerUp();
void enemy();
void eraseEnemy();
void enemy1();
void enemy2();
void enemy3();
char getCharAtxy(short int x, short int y);
int enemy1Direction = -1; // -1 for left, 1 for right
int enemy2Direction = 1; // -1 for left, 1 for right
int enemy3Direction = -1; // -1 for left, 1 for right


int pX=3, pY=16;

int eX1=3, eY1=24;
int eX2=11, eY2=30;
int eX3=26, eY3=36;


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
        if (GetAsyncKeyState(VK_UP))
        {
            movePlayerUp();
        }
	enemy1();
        enemy2();
        enemy3();

        Sleep(100);
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
    gotoxy( 0, 15);
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
    gotoxy(pX, pY);
    cout << " o ";
    gotoxy(pX, pY + 1);
    cout << "/|\\:::o";
    gotoxy(pX, pY + 2);
    cout << "/ \\ ";
}

void erasePlayer()
{
    gotoxy(pX, pY);
    cout << "   ";
    gotoxy(pX, pY + 1);
    cout << "       ";
    gotoxy(pX, pY + 2);
    cout << "   ";
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

void movePlayerRight()
{
    if (getCharAtxy(pX + 7, pY) == ' ' && getCharAtxy(pX + 7, pY + 1) == ' ' && getCharAtxy(pX + 7, pY + 2) == ' ')
    {
        erasePlayer();
        pX = pX + 1;
        player();
    }
}

void movePlayerDown()
{
    if (getCharAtxy(pX, pY + 3) == ' ' && getCharAtxy(pX + 1, pY + 3) == ' ' && getCharAtxy(pX + 2, pY + 3) == ' ')
    {
        erasePlayer();
        pY = pY + 1;
        player();	
    }
}

void movePlayerLeft()
{
    if (getCharAtxy(pX - 1, pY) == ' ' && getCharAtxy(pX - 1, pY + 1) == ' ' && getCharAtxy(pX - 1, pY + 2) == ' ')
    {
        erasePlayer();
        pX = pX - 1;
        player();
    }
}

void movePlayerUp()
{
    if (getCharAtxy(pX, pY - 1) == ' ' && getCharAtxy(pX + 1, pY - 1) == ' ' && getCharAtxy(pX + 2, pY - 1) == ' ')
    {
        erasePlayer();
        pY = pY - 1;
        player();
    }
}


void enemy(int x,int y)
{
    gotoxy(x, y);
    cout << " @ " << endl;
    gotoxy(x, y + 1);
    cout << "/|\\::o" << endl;
    gotoxy(x, y + 2);
    cout << "/ \\ " << endl;
}

void eraseEnemy(int x, int y)
{
    gotoxy(x, y);
    cout << "   ";
    gotoxy(x, y + 1);
    cout << "      ";
    gotoxy(x, y + 2);
    cout << "   ";
}
void enemy1()
{
    eraseEnemy(eX1, eY1);
    eX1 += enemy1Direction;
    if (eX1 <= 3) 
    {
        eX1 = 3;
        enemy1Direction = 1;
    } 
    else if (eX1 >= 32) 
    {
        eX1 = 32;
        enemy1Direction = -1;
    }

    enemy(eX1, eY1);
}

void enemy2()
{
    eraseEnemy(eX2, eY2);
   
    eX2 += enemy2Direction; 
    
    if (eX2 <= 11) 
    {
        eX2 = 11; 
        enemy2Direction = 1;
    } 
     else if (eX2 >= 63) 
    {
        eX2 = 63;y
        enemy2Direction = -1;
    }

    enemy(eX2, eY2);
}

void enemy3()
{
    eraseEnemy(eX3, eY3);
    
    eX3 += enemy3Direction;
    
    if (eX3 <= 26) 
    {
        eX3 = 26; 
        enemy3Direction = 1; 
    }  
      else if (eX3 >= 73) 
    {
        eX3 = 73; 
        enemy3Direction = -1; 
    }

    enemy(eX3, eY3);
}








