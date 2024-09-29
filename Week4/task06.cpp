#include <iostream>
using namespace std;

void printH();
void printA();
void printS();
void printN();


main () 
{	
	system("cls");

  	printH();
	printA();
	printS();	 
	printS();
	printA();
	printN();
  	
}


void printH()
{
cout<<" ##  #      "<<endl;
cout<<" ##  #      "<<endl;
cout<<" #####     "<<endl;
cout<<" ##  #         "<<endl;
cout<<" ##  #     "<<endl;
cout<<""<<endl;
}

void printA()
{
cout<<""<<endl;
cout<<"    ##"<<endl;
cout<<"   ## #  "<<endl;
cout<<"  ##   # "<<endl;
cout<<" ########"<<endl;
cout<<"##       #"<<endl;
cout<<""<<endl;
}

void printS()
{
cout<<""<<endl; 
cout<<"  ######   "<<endl;
cout<<" #        "<<endl;
cout<<"  ######         "<<endl;
cout<<"        #   "<<endl;
cout<<"  ######      "<<endl;
cout<<""<<endl;
}

void printN()
{
cout<<""<<endl;
cout<<" #     #      "<<endl;
cout<<" # #   #       "<<endl;
cout<<" #  #  #       "<<endl;
cout<<" #   # #         "<<endl;
cout<<" #     #         "<<endl;
cout<<""<<endl;
}