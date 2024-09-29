#include <iostream>
using namespace std;

void title();
void aggregate(float,float,float);
void rollNumber();

main()
{
	system("cls");
	title();
	float matric,inter,ecat;
	cout<<"Enter your matric marks: ";
	cin>> matric;
	cout<<"Enter your inter marks: ";
	cin>> inter;
	cout<<"Enter your ECAT marks: ";
	cin>> ecat;

	aggregate(matric,inter,ecat);
	rollNumber();
}

void title()
{
cout<<"  ##     #  ####### ##########      "<<endl;
cout<<"  ##     #  ##          ##         "<<endl;
cout<<"  ##     #  ######      ##              "<<endl;
cout<<"  ##     #  ##          ##          "<<endl;
cout<<"  ########  #######     ##           "<<endl;
cout<<" .........................               "<<endl;
cout<<"     MANAGMENT SYSTEM               "<<endl;
cout<<" '''''''''''''''''''''''''         "<<endl;
}

void aggregate(float matric,float inter,float ecat)
{
	float aggregate1=(matric/1100*30)+(inter/550*30)+(ecat/400*40);
	cout<<"Your aggregate is: "<< aggregate1 <<endl;
}

void rollNumber()
{
	string student1,student2;
	int ecatMarksStd1,ecatMarksStd2;
	cout<<"Name of student1: ";
	cin>> student1;
	cout<<"Enter ECAT marks: ";
	cin>> ecatMarksStd1;
	cout<<"Name of student2: ";
	cin>> student2;
	cout<<"Enter ECAT marks: ";
	cin>> ecatMarksStd2;

	if (ecatMarksStd1>ecatMarksStd2)
	{ cout<<"Roll no.1: "<<student1<<endl;
	cout<<"Roll no.2: "<<student2<<endl; }	

	
	if (ecatMarksStd2>ecatMarksStd1)
	{ cout<<"Roll no.1: "<<student2<<endl;
	cout<<"Roll no.2: "<<student1<<endl; }
	
}
