#include<iostream>
#include<fstream>
using namespace std;
int countCharacters(string x);
main()
{
    int count=countCharacters("linescount.txt");
    cout<<"Lines are :"<<count;
}
int countCharacters(string x)
{
    int count=0;
    char character;
    string poem;
    fstream myFile;
    myFile.open(x,ios::in);
    getline(myFile,poem);
    character=poem[0];
    while( getline(myFile,poem))
    {
       
        
        if(poem[0]!=character && poem[0]!=character-32)
        {
            count++;
        }
       
        
    }
    myFile.close();

    return count;

}