#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

const int maxCount = 100;
int userCount = 0;
string username[maxCount];
string password[maxCount];
string role[maxCount];

int loginPage();
string signup(string [], string [], string []);
bool checkCredential(string , string, string);
void header2();
int userMenu();
void contactUs();
void printHeader();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
int ticketCost(string, string);
void printTicket(string, string, string, int64_t, int64_t, int);
void travelPackages();

int main()
{
    string name, departurePoint, arrivalPoint, writeOption, openInterface;
    int64_t cnic,phoneNumber;
    int option, numberOfTickets;
    ticketCost(arrivalPoint, departurePoint);

    system("cls");
    printHeader();
    getch();
    system("cls");
    int loginOption = 0;
    while(loginOption!=3){

    loginOption = loginPage();
    
    if(loginOption == 1){
    system("cls");
    header2();        
    cout<<"Enter a username... ";
    cin>> username[userCount];
    cout<<"E1nter a password... ";
    cin>> password[userCount];
    cout<<"Enter your role (Either 'Admin' or 'User')... ";
    cin>>role[userCount];
    if( (role[userCount] != "Admin") && (role[userCount] != "User") )
    {
         cout<<"Invalid role. Please enter 'Admin' or 'User'."<<endl;
         Sleep(3000);
    }
    else if((role[userCount] == "Admin") || (role[userCount] == "User")){
    system("cls");
    gotoxy(30, 30);
    cout<<"                                      Hi! "<<username[userCount] <<endl;
    gotoxy(30, 31);
    cout<<"Your account has been created successfuly. Go to ' Login with credentials to continue process. ' ";
    Sleep(5000);
    userCount = userCount + 1;
    }

    bool isExist = checkCredential(username[userCount], password[userCount], role[userCount]);
    if(isExist){
    system("cls");
    gotoxy(30, 30);
    cout<<"This account already exist. Go to ' Login with credentials to continue process with existing account. ' ";
    Sleep(5000);    
    }
    }
    if(loginOption == 2){
    system("cls");
    header2();
    string name;
    string password;
    string role;
      
    cout<<"Enter your username... ";
    cin>> name;
    cout<<"Enter your password... ";
    cin>> password;
    cout<<"Enter your role... ";
    cin>> role;
    bool isValid = checkCredential(name, password, role);
    if(isValid == true && role == "User"){
         openInterface = "userInterface";
    }
    else if(isValid == true && role == "Admin"){
        openInterface = "adminInterface";
    }
    else if(isValid == false){
       cout<<"Invalid Credentials. Please enter correct credentials."<<endl; 
    }
    Sleep(1000);
    }
        
    if(openInterface == "userInterface" ){
    int chooseOption = 0;  
    while(true){  
    system("cls");   
    chooseOption = userMenu();                   

    if( chooseOption == 1)
    {
     system("cls");   
     cout<<"Enter name of passenger: ";
     cin>> name;
     cout<<"Enter CNIC of passenger: ";
     cin>> cnic;
     cout<<"Enter phone number of passenger: ";
     cin>> phoneNumber;
     cout<<"Enter your place of departure: ";
     cin>> departurePoint;
     cout<<"Enter your place of arrival: ";
     cin>> arrivalPoint;
     cout<<"Enter number of tickets: ";
     cin>> numberOfTickets;    
    }
    else if(chooseOption == 2)
    {
     system("cls");           
    }
    else if(chooseOption == 3)
    {
     system("cls");
     travelPackages();
    }
    else if(chooseOption == 4)
    {
     system("cls"); 
     contactUs();  
    }
    else if(chooseOption == 5)
    {
        system("cls");
        printTicket(name, departurePoint, arrivalPoint, cnic, phoneNumber, numberOfTickets);
    }
    else if(chooseOption == 6)
    {
        system("cls");
        loginOption = loginPage();
        break;
    }  
    else{
        system("cls");
        userMenu();
        cout<<"      INVALID INPUT "<<endl;
        cout<<"Please enter a valid option > ";
        cin>> chooseOption;
    }    
    }
    loginOption = loginPage();   
    }
    }

    
    
    return 0;
}


string displayLoginPage(string writeOption) 
{
    string username, password;
     
    cout<< "===========================" <<endl;
    cout<< "        Welcome to SKY     " <<endl;
    cout<< " TRAVELS transport service " <<endl;
    cout<< "===========================" <<endl;
    
    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your password: ";
    cin >> password;
    cout<<"Please enter 'ok': ";
    cin>> writeOption;
    return writeOption;
}

void menu()
{
    cout<<"1. Book Ticket"<<endl;
    cout<<"2. View Routs"<<endl;
    cout<<"3. View travel package"<<endl;
    cout<<"4. contect Us"<<endl;
    cout<<"5. View your Ticket"<<endl;     
    cout<<"6. Exit: "<<endl;
}

void printHeader()
{
 cout<< R"(   .oooooo..o oooo                             .                                            oooo               )"<<endl;
 cout<< R"(  d8P'    `Y8 `888                           .o8                                            `888               )"<<endl;
 cout<< R"(  Y88bo.       888  oooo  oooo    ooo      .o888oo oooo d8b  .oooo.   oooo    ooo  .ooooo.   888   .oooo.o     )"<<endl;
 cout<< R"(   `"Y8888o.   888 .8P'    `88.  .8'         888   `888""8P `P  )88b   `88.  .8'  d88' `88b  888  d88(  "8     )"<<endl;
 cout<< R"(       `"Y88b  888888.      `88..8'          888    888      .oP"888    `88..8'   888ooo888  888  `"Y88b.      )"<<endl;
 cout<< R"(  oo     .d8P  888 `88b.     `888'           888 .  888     d8(  888     `888'    888    .o  888  o.  )88b     )"<<endl;
 cout<< R"(  8""88888P'  o888o o888o     .8'            "888" d888b    `Y888""8o     `8'     `Y8bod8P' o888o 8""888P'     )"<<endl;
 cout<< R"(                          .o..P'     .............................................                             )"<<endl;
 cout<< R"(                          Y8P'       YOUR    PATH    TO  ADVENTURE   STARS   HERE!                             )"<<endl;
 cout<< R"(                                     '''''''''''''''''''''''''''''''''''''''''''''                             )"<<endl; 
 cout<<"                            "<<endl;
 cout<<"                            "<<endl;
 cout<<"     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ "<<endl;
 cout<<"    |          Wellcome to SKY TRAVELS,        |"<<endl;
 cout<<"    | your trusted bus transportation service! |"<<endl;
 cout<<"     ------------------------------------------ "<<endl;
 cout<<"    Plan your trip with ease.                   "<<endl;
 cout<<"                 Safe travels and appy journeys!"<<endl;
}

void printTicket(string name, string departurePoint, string arrivalPoint,int64_t cnic,int64_t phoneNumber, int ticketPrice)
{
cout<<""<<endl;    
cout << "Ticket" << endl;
cout << "Name" << "\t\t" << "Departure from" << "\t" << "Arrival at" << "\t" << "Phone number" << "\t" << "CNIC" << "\t\t" << "Ticket price"<<endl;
cout << endl;
cout << name << "\t\t" << departurePoint << "\t\t" << arrivalPoint << "\t\t" << phoneNumber << "\t" << cnic << "\t" << ticketPrice<<endl;
}