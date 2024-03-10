#include<iostream>
using namespace std;
int main(){
int c = 17;
  int d = 5;
//Left Shift
  cout<<"Left shift:(d<<1):  "<<(d<<1)<<endl;
  cout<<"Left shift:(d<<2):  "<<(d<<2)<<endl;
//Right Shift  
cout<<"Right shift:(c>>1):  "<<(c>>1)<<endl;
  cout<<"Right shift:(c>>2):  "<<(c>>2)<<endl;
//Pre-increment and pre-decrement post-increment and post-decrement
  int i = 4;
  cout<<"Original Value : "<<i<<endl; //4
  cout<<"post-increment (i++): "<<i++<<endl; //4, 4+1
  cout<<"Change Value of i: "<<i<<endl; //5
  cout<<"pre-increment (++i): "<<++i<<endl; //5+1 = 6
  cout<<"Change Value of i: "<<i<<endl; //6
  cout<<"post decrement (i--): "<<i--<<endl; //6, 6-1
  cout<<"Change Value of i: "<<i<<endl; // 5
  cout<<"pre decrement (--i): "<<--i<<endl; //5-1 = 4
  cout<<"Change Value of i: "<<i<<endl; // 4
  return 0;
}
