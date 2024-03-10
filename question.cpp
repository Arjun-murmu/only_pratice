#include<iostream>
using namespace std;

int main(){
//Question 1.
  int a,b = 1;
  if(++a){
    cout<<b;
  }
  else{
    cout<<++b;
  }
//output: 1;
//if(a++) then output is b++ = 2

//Question 2.
  {
  int c = 1;
 int d = 2;
 if(c-->0 & ++d >2){
     cout<<"Stage 1 - Inside if ";
 }
 else{
     cout<<"Stage 2 - Inside else ";
 }
}
//Question 3.
  {
  if(c-->0 || ++d >2){
     cout<<"Stage 1 - Inside if ";
 }
 else{
     cout<<"Stage 2 - Inside else ";
 }
}
  //Question 4.
  {
   int number = 3;
 cout<<"\n"<<(25*(++number));
}
}
//Question 5.
{
  int p = 2;
int q = p++;
int r = ++p;
cout<<"q: "<<q<<endl;
cout<<"r: "<<r<<endl;
}
 return 0;
}
