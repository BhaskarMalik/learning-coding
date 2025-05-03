#include <iostream>
#include <fstream>

using namespace std;


int main(){
    string st = "tu kon h ";
    string st2;

    ofstream out("file.txt");//out is a object created to write in the file
    out<<st;

    ifstream in("file.txt");//in is a object created to read from the file
    getline(in,st2);
    cout<<st2;
    
    
    return 0;
}