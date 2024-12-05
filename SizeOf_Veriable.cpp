#include<iostream>
#include<string>
using namespace std;

int main(){
    int age;
    char word;
    double weight;
    string name;
    float kg;
    int i = sizeof(int);
    int c = sizeof(char);
    int d = sizeof(double);
    int f = sizeof(float);
    int s = sizeof(string);
    cout<<"SizeOf int : "<<i<<" byte"<<" , "<<i*8<<" Bit"<<endl;
    cout<<"SizeOf Char : " <<c<<" byte"<<" , "<<c*8<<" Bit"<<endl;
    cout<<"SizeOf double : "<<d<<" byte"<<" , "<<d*8<<" Bit"<<endl;
    cout<<"SizeOf float : "<<f<<" byte"<<" , "<<f*8<<" Bit"<<endl;
    cout<<"SizeOf string : "<<s<<" byte"<<" , "<<s*8<<" Bit"<<endl;
    cout<<"Note* : "<<"string: This typically refers to the size of a string object (not the actual characters in it) and is system-dependent."<<endl;
    
    return 0;
}
