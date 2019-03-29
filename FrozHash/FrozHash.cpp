#include <iostream>
#include <random>


using namespace std;


int main(int argc, char const *argv[])
{

    srand(time(NULL));

    string input, key, outString;

    int i = 0;


    if (argc < 3) 
    {

        cout << "Usage: ./FrozHash <inputString> <Key | Optional>" << endl;
        return -1;

    }

    input.assign(argv[1]);
    key.assign(argv[2]);

    outString.resize(input.length());

    while(i < input.length())
    {

        if (i >= key.length()) 
        {

            i = 0;
        
        }

        outString[i] = (char) ((input[i]-'0') ^ (key[i]-'0')) + '0'; 

        i++;
        
    }

    cout << "Output: " << outString << endl;  
    
    
    
    return 0;
}
