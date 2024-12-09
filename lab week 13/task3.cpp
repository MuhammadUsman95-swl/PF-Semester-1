#include<iostream>
#include<fstream>
using namespace std;
int countCharacters(string);
main()
{
  string fileName = "hello.txt";
    int count=countCharacters(fileName);
    cout<<"Frequency is :"<<count;
}
int countCharacters(string filename)
{
    int count=0;
    char character;
    string poem;
    fstream myFile;
    myFile.open(filename,ios::in);
    myFile >> character;
    while(!myFile.eof())
    {
        getline(myFile,poem);
        for (int i = 0; i < poem.length() ; i++)
        {
          if(poem[i]==character || poem[i]==character-32)
          {
            count++;
          }
        }
    }
    myFile.close();

    return count;

}