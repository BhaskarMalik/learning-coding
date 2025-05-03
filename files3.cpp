#include <iostream>
#include <fstream>

using namespace std;


int main(){



    ifstream in;//in is a object created to read from the file
    string st,st2;
    in.open("file.txt");

    while (in.eof()==0){//for reading lines in loop;
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    
    
    return 0;
}