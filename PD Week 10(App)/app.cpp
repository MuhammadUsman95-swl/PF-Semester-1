#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

const int maxCount = 100;
int userCount = 0;
string username[maxCount];
string password[maxCount];
string role[maxCount];
string cities[10] = {"multan", "sahiwal", "okara", "lahore", "islamabad"};    
int ticketPrice[190] = {
                        0, 1250, 1100, 2400, 3800, 0, 0, 0, 0, 0,                     
                        1250, 0, 350, 900, 2600, 0, 0, 0, 0, 0,     
                        1100, 350, 0, 780, 2500, 0, 0, 0, 0, 0,
                        2400, 900, 780, 0, 1800, 0, 0, 0, 0, 0,
                        3800, 2600, 2500, 1800, 0,0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0,0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0,0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0,0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0,0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0,0, 0, 0, 0, 0,
                        };
int ticketCost = 0;
int cityCount = 5;

int loginPage();
string signup(string [], string [], string []);
bool checkCredential(string , string, string);
void header2();
int userMenu();
void contactUs();
void printHeader();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printTicket(string, string, string, string, string, int, string);
void travelPackages();
int adminMenu();
void viewUsers();
void viewBookings();
void viewPayments();
void deleteCity(string);
void addCity(string);
void updateTravelPackages(string, string, int);
bool isValidCNIC(const string& );
bool isValidPhoneNumber(const string& );
int getValidatedInput(const char* , int, int); 



main()
{
    string name, departurePoint, arrivalPoint, writeOption, openInterface, cityToDelete, newCity,cnic,phoneNumber, time, date;
    int option, numberOfTickets, newPrice, chooseOption = 0,  selectOption = 0;

    system("cls");
    printHeader();
    getch();
    system("cls");
    int loginOption = 0;
    while(loginOption!=3){
    system("cls");   
    cout<<"1. Creat a new account "<<endl;
    cout<<"2. Login with credentials "<<endl;
    cout<<"3. Exit "<<endl;   

    loginOption = getValidatedInput("Enter login option (1-3): ", 1, 3);
    
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
    system("cls");    ;   
    while(true){     
    system("cls");
    if( chooseOption == 0){
    cout<<"1. Book Ticket"<<endl;
    cout<<"2. View your Ticket"<<endl;
    cout<<"3. View travel package"<<endl;
    cout<<"4. Contect Us"<<endl;     
    cout<<"5. Logout: "<<endl;   
    chooseOption = getValidatedInput("Enter an option (1-5): ", 0, 5);; 
    }
    if( chooseOption == 1)
    {
     system("cls");      
     cout<<"Enter name of passenger: ";
     cin>> name;
     do {
    cout<<"Enter CNIC of passenger (13 digits, starting with '3'): ";
    cin>> cnic;
    if (!isValidCNIC(cnic)) {
        cout << "Invalid CNIC format. Please try again." << endl;
    }
     } while (!isValidCNIC(cnic));

    do{
    cout << "Enter phone number of passenger (11 digits, starting with '03'): ";
    cin >> phoneNumber;
    if (!isValidPhoneNumber(phoneNumber)) {
    cout << "Invalid phone number format. Please try again." << endl;
    }
    } while (!isValidPhoneNumber(phoneNumber));
     cout<<"Enter your place of departure: ";
     cin>> departurePoint;
     cout<<"Enter your place of arrival: ";
     cin>> arrivalPoint;
     cout<<"Enter number of tickets: ";
     cin>> numberOfTickets;
     cout<<"Enter '0' to go back to menu....";        
     cin>> chooseOption;  
    }
     
    

    else if(chooseOption == 3)
    {
     system("cls");
    cout<<"****************************************************************************************************************"<<endl;
    cout<<"*                                          Travel Packages                                                     *"<<endl;
    cout<<"****************************************************************************************************************"<<endl;
     travelPackages();
     cout<<"Enter '0' to go back to menu....";
     cin>> chooseOption;     
    }
    else if(chooseOption == 4)
    {
     system("cls");      
     contactUs();
     cout<<"Enter '0' to go back to menu....";        
     cin>> chooseOption;  
    }
    else if(chooseOption == 2)
    { 
     system("cls");   
     printTicket(name, departurePoint, arrivalPoint, cnic, phoneNumber, numberOfTickets, date);
     cout<<"Enter '0' to go back to menu....";        
     cin>> chooseOption;
    }
    else if(chooseOption == 5)
    {
        openInterface = "none";
        break;
    }  
    }
    }

    else if(openInterface == "adminInterface" ){
             
        while(true){
            system("cls");
            cout<<"1. View users"<<endl;
            cout<<"2. Delete a city"<<endl;
            cout<<"3. Add a new city"<<endl;
            cout<<"4. Update travel Packages"<<endl;
            cout<<"5. Logout"<<endl;
        selectOption = getValidatedInput("Enter an admin option (1-5): ", 1, 5);
            if(selectOption == 0){
             selectOption = adminMenu();
            }
            if(selectOption == 1){
            viewUsers();    
            cout<<"Enter '0' to go back to menu....";        
            cin>> selectOption;   
            }
            if(selectOption == 2){
            cout<<"Enter city to remove: ";
            cin>> cityToDelete;
            deleteCity(cityToDelete);
            cout<<"Enter '0' to go back to menu....";        
            cin>> selectOption;   
            }
            if(selectOption == 3){
            cout<<"Enter new city: ";
            cin>> newCity;    
            addCity(newCity);
            cout<<"Enter '0' to go back to menu....";        
            cin>> selectOption;   
            }
            if(selectOption == 4){
            cout<<"Enter departure city: ";
            cin>> departurePoint;
            cout<<"Enter arrival city: ";
            cin>> arrivalPoint;
            cout<<"Enter new price for route: ";
            cin>> newPrice;    
            updateTravelPackages(departurePoint, arrivalPoint, newPrice);
            cout<<"Enter '0' to go back to menu....";        
            cin>> selectOption;   
            }
            if(selectOption == 5){
            openInterface = "none";    
            break;
            }
        }
    }
    }
}    

int userMenu()
{
    system("cls");
    int option;
    cout<<"1. Book Ticket"<<endl;
    cout<<"2. View your Ticket"<<endl;
    cout<<"3. View travel package"<<endl;
    cout<<"4. Contect Us"<<endl;     
    cout<<"5. Logout: "<<endl;
    cout<<"Enter a valid option > ";
    cin >> option;
    return option;
}


void header2(){
    cout<< "=======================================================================================================================================" <<endl;
    cout<< R"(\ \      / __|  |      __|   _ \   \  | \ \      / __|   __ __| _ \      __|  |  / \ \  /   __ __| _ \    \ \ \   / __|  |      __|   )"<<endl;
    cout<< R"( \ \ \  /  _|   |     (     (   | |\/ |  \ \ \  /  _|       |  (   |   \__ \  . <   \  /       |     /   _ \ \ \ /  _|   |    \__ \   )"<<endl;
    cout<< R"(  \_/\_/  ___| ____| \___| \___/ _|  _|   \_/\_/  ___|     _| \___/    ____/ _|\_\   _|       _|  _|_\ _/  _\ \_/  ___| ____| ____/   )"<<endl;
    cout<< "                                                                                                                                         "<<endl;
    cout<< " -------------------------------------------------------------------------------------------------------------------------------------- "<<endl;
    cout<< R"(    __ __| _ \    \ \ \   / __|  |      __|   |                                       |                            _)                 )"<<endl;
    cout<< R"(       |     /   _ \ \ \ /  _|   |    \__ \     _|   _| _` |    \  (_-<  _ \   _ \   _| _|   (_-<   -_)   _| \ \ / |   _|   -_)       )"<<endl;
    cout<< R"(      _|  _|_\ _/  _\ \_/  ___| ____| ____/   \__| _| \__,_| _| _| ___/ .__/ \___/ _| \__|   ___/ \___| _|    \_/ _| \__| \___|       )"<<endl;
    cout<< R"(                                                                       _|                                                             )"<<endl;
    cout<< "=======================================================================================================================================" <<endl;    
}
int loginPage() 
{
    system("cls");
    int option;
    cout<<"1. Creat a new account "<<endl;
    cout<<"2. Login with credentials "<<endl;
    cout<<"3. Exit "<<endl;
    cout<<"Enter a valid option... ";
    cin>> option;
    return option;
}

bool checkCredential(string name, string pin, string character){
    bool flag = false;
    for(int x = 0; x < userCount;  x = x + 1){
    if(username[x] == name && password[x] == pin && role[x] == character){
        flag = true;
        break;
    } 
    }
    return flag;
}

void printHeader()
{ 
 int Mx = 28, My = 13;   
 system("Color 3F");
 gotoxy(Mx, My+1);   
 cout<< R"(   .oooooo..o oooo                             .                                            oooo               )"<<endl;
 gotoxy(Mx, My+2);
 cout<< R"(  d8P'    `Y8 `888                           .o8                                            `888               )"<<endl;
 gotoxy(Mx, My+3);
 cout<< R"(  Y88bo.       888  oooo  oooo    ooo      .o888oo oooo d8b  .oooo.   oooo    ooo  .ooooo.   888   .oooo.o     )"<<endl;
 gotoxy(Mx, My+4);
 cout<< R"(   `"Y8888o.   888 .8P'    `88.  .8'         888   `888""8P `P  )88b   `88.  .8'  d88' `88b  888  d88(  "8     )"<<endl;
 gotoxy(Mx, My+5);
 cout<< R"(       `"Y88b  888888.      `88..8'          888    888      .oP"888    `88..8'   888ooo888  888  `"Y88b.      )"<<endl;
 gotoxy(Mx, My+6);
 cout<< R"(  oo     .d8P  888 `88b.     `888'           888 .  888     d8(  888     `888'    888    .o  888  o.  )88b     )"<<endl;
 gotoxy(Mx, My+7);
 cout<< R"(  8""88888P'  o888o o888o     .8'            "888" d888b    `Y888""8o     `8'     `Y8bod8P' o888o 8""888P'     )"<<endl;
 gotoxy(Mx, My+8);
 cout<< R"(                          .o..P'     .............................................                             )"<<endl;
 gotoxy(Mx, My+9);
 cout<< R"(                          Y8P'       YOUR    PATH    TO  ADVENTURE   STARS   HERE!                             )"<<endl;
 gotoxy(Mx, My+10);
 cout<< R"(                                     '''''''''''''''''''''''''''''''''''''''''''''                             )"<<endl; 
 gotoxy(Mx+28, My+13);
 cout<<"          ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ "<<endl;
 gotoxy(Mx+28, My+14);
 cout<<"         |          Wellcome to SKY TRAVELS,        |"<<endl;
 gotoxy(Mx+28, My+15);
 cout<<"         | your trusted bus transportation service! |"<<endl;
 gotoxy(Mx+28, My+16);
 cout<<"          ------------------------------------------ "<<endl;
 gotoxy(Mx+28, My+17);
 cout<<"          Plan your trip with ease.                  "<<endl;
 gotoxy(Mx+28, My+18);
 cout<<"                     Safe travels and happy journeys!"<<endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
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

void travelPackages(){
    if (cityCount <= 1) {
        cout<<"No cities are available to display travel packages."<<endl;
        return;
    }

    for(int i = 0; i < cityCount; i = i + 1){
        for(int j = 0; j < cityCount; j = j + 1){
        if (i != j) { 
        int id = i * 10 + j;
        if(ticketPrice[id] > 0) {    
        cout<<"Travel from "<<cities[i] <<" to "<<cities[j] <<" - Ticket Price: "<<ticketPrice[id] <<" PKR" <<endl;
        cout<<""<<endl;
        }
    }
    }    
    }
}


void printTicket(string name, string departurePoint, string arrivalPoint,string cnic,string phoneNumber, int numberOfTickets, string date)
{
 int ticket, city1, city2;
 for(int x = 0; x < 10 ; x = x + 1){
    if(departurePoint == cities[x]){
        city1 = x;
    }
    else if(arrivalPoint == cities[x]){
        city2 = x;
    }
   }
int id = (city1*10) + city2;   
ticket = ticketPrice[id];   
 cout<<"Name of passanger : "<< name<<endl;   
 cout<<"Phone number : " <<phoneNumber <<endl;
 cout<<"CNIC: "<<cnic <<endl;
 cout<<"Place of Departure : "<<departurePoint <<endl;
 cout<<"Place of Arrival : "<<arrivalPoint <<endl;
 cout<<"Number of tickets: "<<numberOfTickets<<endl;
 cout<<"Ticket Price: "<<ticket*numberOfTickets<<endl;
}
 

void contactUs(){
   cout<<"Contact Us"<<endl;
   cout<<""<<endl;
   cout<<"Thank you for choosing Sky Travels—your trusted partner in safe, comfortable, and reliable bus transportation."<<endl;
   cout<<"We're here to ensure you have an exceptional travel experience, and we're always available to help with your"<<endl; 
   cout<<"inquiries, feedback, or assistance."<<endl;
   cout<<""<<endl;

   cout<<"Get in Touch"<<endl;
   cout<<""<<endl;
   cout<<"Customer Support:"<<endl;
   cout<<"Our friendly customer service team is ready to assist you with any questions regarding bookings, routes, schedules,"<<endl;
   cout<<"or any other travel-related needs."<<endl;
   cout<<"Phone: 04040333221"<<endl;
   cout<<"Email: usman15@skytravels.com"<<endl;
   cout<<"Hours: Monday - Sunday, 8:00 AM - 10:00 PM"<<endl;
   cout<<"Head Office"<<endl;
   cout<<"Sky Travels near Faisal Movers terminal opposite Sahiwal International Hospital, Sahiwal"<<endl;
   cout<<"Sahiwal, Postal code: 57000"<<endl;
   cout<<"Punjab, Pakistan"<<endl;

   cout<<"Feedback"<<endl;
   cout<<""<<endl;
   cout<<"At Sky Travels, we value your input. Whether it's a suggestion for improving our services or sharing a memorable"<<endl;
   cout<<"experience, we would love to hear from you. Feel free to reach out through our email or contact form below."<<endl;
}
 

int adminMenu(){
    system("cls");
    int option;
    cout<<"1. View users"<<endl;
    cout<<"2. Delete a city"<<endl;
    cout<<"3. Add a new city"<<endl;
    cout<<"4. Update travel Packages"<<endl;
    cout<<"5. Logout"<<endl;
    cout<<"Enter a valid option >";
    cin >> option;
    return option;
}

void viewUsers() {
    cout << "****************************************************************************************************************" << endl;
    cout << "*                                          LIST OF Users                                                       *" << endl;
    cout << "****************************************************************************************************************" << endl;

    if (userCount == 0) {
        cout << "No users available." << endl;
    } else {
        cout << "User no.    User Name          Password            Role" << endl;
        cout << "--------------------------------------------------------------" << endl;

        for (int i = 0; i < userCount; i++) {
            cout << (i + 1) << "          " << username[i] << "          " << password[i] << "          " << role[i] << endl;
        }
    }
}



void deleteCity(string cityToDelete) {
    cout << "****************************************************************************************************************" << endl;
    cout << "*                                            Remove a city                                                     *" << endl;
    cout << "****************************************************************************************************************" << endl;

    int cityIndex = -1;

    for(int i = 0; i < cityCount; i = i + 1){
        if(cities[i] == cityToDelete){
            cityIndex = i;
            break;
        }
    }
    if (cityIndex == -1) {
        cout << "City '" << cityToDelete << "' not found in the list." << endl;
        return;
    }

    for(int x = cityIndex; x < cityCount - 1; x = x + 1){
        cities[x] = cities[x + 1];
    }
    cities[cityCount - 1] = "";

    for (int i = cityIndex; i < cityCount - 1; i = i + 1){
        for (int j = 0; j < cityCount; j++) {
            ticketPrice[i * 10 + j] = ticketPrice[(i + 1) * 10 + j];
        }
    }

    for (int x = cityIndex; x < cityCount - 1; x = x + 1){
        for (int y = 0; y < cityCount - 1; y = y + 1){
            ticketPrice[y * 10 + x] = ticketPrice[y * 10 + (x + 1)];
        }
    }
 
    for (int i = 0; i < cityCount; i = i + 1) {
        ticketPrice[(cityCount - 1) * 10 + i] = 0;
        ticketPrice[i * 10 + (cityCount - 1)] = 0;
    }

    cityCount = cityCount - 1;

    cout<<"City '"<<cityToDelete<<"' and all its connections have been removed."<<endl;
}



void addCity(string newCity) {
    cout<<"****************************************************************************************************************"<<endl;
    cout<<"*                                            Add a new city                                                    *"<<endl;
    cout<<"****************************************************************************************************************"<<endl;

    if(cityCount >= 10){
        cout<<"Cannot add more cities. Maximum city limit reached."<<endl;
        return;
    } 

    for(int i = 0; i < cityCount; i = i + 1){
        if (cities[i] == newCity) {
            cout<<"City '"<< newCity<< "' already exists in the list."<<endl;
            return;
        }
    }  
    
    cities[cityCount] = newCity;

    for(int i = 0; i < cityCount; i = i + 1){
    cout<<"Price from '"<<newCity<<"' to '"<<cities[i]<<"': ";
    cin>> ticketPrice[cityCount * 10 + i];

    cout<<"Price from '"<<cities[i]<<"' to '"<<newCity <<"': ";
    cin>> ticketPrice[i * 10 + cityCount];
    }

    ticketPrice[cityCount * 10 + cityCount] = 0;

    for (int i = cityCount + 1; i < 10; i = i + 1){
        ticketPrice[cityCount * 10 + i] = 0;
        ticketPrice[i * 10 + cityCount] = 0;
    }

    cityCount = cityCount + 1;


    cout<<"City '"<<newCity <<"' has been added successfully along with its connections."<<endl;
   
}


void updateTravelPackages(string departure, string arrival, int newPrice) {
    cout << "****************************************************************************************************************" << endl;
    cout << "*                                          Update Travel Packages                                              *" << endl;
    cout << "****************************************************************************************************************" << endl;

   if (cityCount < 2) {
        cout<<"Not enough cities available to update a travel package."<<endl;
        return;
    }

    int city1 = -1, city2 = -1;
    for(int i = 0; i < cityCount; i++){
        if (cities[i] == departure){
            city1 = i;
        }
        if(cities[i] == arrival){
            city2 = i;
        }
    }

    if(city1 == -1 || city2 == -1){
        cout<<"One or both cities are not found in the list. Please try again."<<endl;
        return;
    }

    ticketPrice[city1 * 10 + city2] = newPrice;
    ticketPrice[city2 * 10 + city1] = newPrice;

    cout<<"Travel package updated successfully between '"<<departure <<"' and '"<<arrival <<"' with the new price: "<<newPrice <<endl;
}


bool isValidCNIC(const string& cnic){
    if (cnic.length() == 13 && cnic[0] == '3') {
    for (char c : cnic) {
    if (!isdigit(c)) return false;
    }
        return true;
    }
    return false;
}

bool isValidPhoneNumber(const string& phone){
    if (phone.length() == 11 && phone[0] == '0' && phone[1] == '3') {
    for (char c : phone) {
    if (!isdigit(c)) return false;
    }
    return true;
    }
    return false;
}

int getValidatedInput(const char* prompt, int min, int max){
    int value;
    while (true){
        cout<<prompt;
        cin>> value;

    if (cin.fail() || value < min || value > max) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout<<"Invalid input. Please enter a number between "<<min <<"and "<<max << "."<<endl;
        } else {
        cin.ignore(1000, '\n');
        return value;
        }
    }
}
