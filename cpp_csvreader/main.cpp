#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int fcopy(ifstream source, ofstream dest) {
    string line;

    while (!source.eof())
    {

        getline(source, line);
        dest << line << endl;
        
    }

}

int main(int argc, char const *argv[])
{

    ifstream file_to_read;
    ofstream file_to_write;

    file_to_read.open("example.txt");
    file_to_write.open("output.txt");

    fcopy(file_to_read, file_to_write);
        
    file_to_read.close();
    file_to_write.close();
    return 0;
}
