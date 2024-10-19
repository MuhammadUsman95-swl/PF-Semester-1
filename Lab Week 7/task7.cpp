#include <iostream>
using namespace std; 

main()
{
    float countNumber, number, x = 0;
    float x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;
    float p1, p2, p3, p4, p5;
    cout<<"Enter a numbers count ";
    cin>> countNumber;
    while( x < countNumber)
    {
        x = x+1;
        cout<<"Enter a number:";
        cin>> number;
        if(number < 200)
        {
           x1 = x1 + 1;
           p1 = (x1/countNumber)*100;
        }
        else if(number >= 200 && number < 400)
        {
           x2 = x2 + 1;
           p2 = (x2/countNumber)*100;
        }
        else if(number >= 400 && number < 600)
        {
            x3 = x3 + 1;
            p3 = (x3/countNumber)*100;
        }
        else if(number >= 600 && number < 800)
        {
           x4 = x4 + 1;
           p4 = (x4/countNumber)*100;
        }
        else if(number >= 800 && number <= 1000)
        {
           x5 = x5 + 1;
           p5 = (x5/countNumber)*100;
        }
    }
    cout<<""<<p1<<"%"<<endl;
    cout<<""<<p2<<"%"<<endl;
    cout<<""<<p3<<"%"<<endl;
    cout<<""<<p4<<"%"<<endl;
    cout<<""<<p5<<"%"<<endl;
}