#include <iostream>
#include <fstream>
using namespace std;
void displayWords(string x);
main()
{
 displayWords( "word.txt");
}
void displayWords(string x)
{
    
    string para;
    fstream myFile;
    myFile.open(x, ios::in);
    while (getline(myFile, para))
    {
        string word="";
        for (int i = 0; i < para.length(); i++)
        {
            char ch = para[i];
            if (ch == ' ')
            {
                if (word.length() < 4 && word != "")
                {
                    cout << word << " ";
                }
            word="";
            }
            else{
                word +=ch;
            }
        }

    }
}