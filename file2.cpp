#include <iostream>
#include <fstream>

using namespace std;


int main(){
    ofstream out("sample1.txt");
    string name;
    cout<<"enter your name ";
    cin>>name;
    out<< name + " my name is";
    out.close();

    ifstream in("sample1.txt");
    string cont;
    in>>cont;
    cout<<"the content of this file is: "<<cont;
    in.close();
    return 0;
}