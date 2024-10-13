#include <iostream>
using namespace std;

string displayLoginPage(string);
void printHeader();
void menu();
void printTicket(string, string, string, int64_t, int64_t, int);

int main()
{
    system("cls");

    string name, departurePoint, arrivalPoint;
    int64_t cnic,phoneNumber;
    int ticketPrice;
    string writeOption;
    int chooseOption;
 

    writeOption = displayLoginPage(writeOption);
    while(true){
    if( writeOption == "ok" || writeOption == "exit")
    {
        system("cls");
        printHeader();
        menu();
        cout<<"Enter an option (only number): ";
        cin>> chooseOption;
    }

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
     cout<<"Enter 'exit': ";
     cin>> writeOption;        
    }
    if(chooseOption == 2)
    {
     system("cls");   
     cout<<"Enter 'exit':";
     cin>> writeOption;        
    }
    if(chooseOption == 3)
    {
     system("cls");
     cout<<"Enter 'exit':";
     cin>> writeOption;
    }
    if(chooseOption == 4)
    {
     system("cls");   
     cout<<"Enter 'exit':";
     cin>> writeOption;
    }
    if(chooseOption == 5 )
    {
        system("cls");
        printTicket(name,departurePoint,arrivalPoint,cnic,phoneNumber, ticketPrice);    
        cout<<"Enter 'exit' to go on menu:";
        cin>> writeOption;
    }
    if( chooseOption == 6)
    {
        system("cls");
        break;
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