#include <iostream>
using namespace std;

float millimeterConversion(int, int,int,string);
float centimeterConversion(int,int,int,string);
float meterConversion(int,int,int,string);
float kilometerConversion(int,int,int,string);

int main()
{
    int length,width,height;
    string outputUnit;

    cout<<"Enter the lengt of pyramid (in meters): ";
    cin>> length;
    cout<<"Enter the width of pyramid (in meters): ";
    cin>> width;
    cout<<"Enter the height of pyramid (in meters): ";
    cin>> height;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>> outputUnit;

    if( outputUnit == "millimeters" )
    {
        float volume1 = millimeterConversion(length,width,height,outputUnit);
        cout<<"Volume of pyramid is: "<<volume1<<" cubic millimeter.";
    }

    if( outputUnit == "centimeters" )
    {
        float volume2 = centimeterConversion(length,width,height,outputUnit);
        cout<<"Volume of pyramid is: "<<volume2<<" cubic centimeter.";
    }

    if(outputUnit == "meters")
    {
        float volume3 = meterConversion(length,width,height,outputUnit);
        cout<<"Volume of pyramid is: "<<volume3<<" cubic meter.";
    }

    if( outputUnit == "kilometers"  )
    {
        float volume4 = kilometerConversion(length,width,height,outputUnit);
        cout<<"Volume of pyramid is: "<<volume4 <<" cubic kilometer.";
    }
    
    return 0;
}

float millimeterConversion( int length, int width,int height, string outputUnit)
{
    
    float volumeInMillimeter = 1000000000*length*width*height/3;
    return volumeInMillimeter;
}

float centimeterConversion( int length, int width,int height, string outputUnit)
{
   
    float volumeInCentimeter = 1000000*length*width*height/3;
    return volumeInCentimeter;
}

float meterConversion( int length, int width,int height, string outputUnit)
{    
    float volumeInMeter = length*width*height/3;
    return volumeInMeter;
}

float kilometerConversion( int length, int width,int height, string outputUnit)
{
    float volumeInKilometer = length*width*height/3*1e9;
    return volumeInKilometer;
}