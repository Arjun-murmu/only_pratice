#include<iostream>
using namespace std;

int main(){
int n = 4;
for(int i = 0;i<=n;i++){
        //Space print 0 to n-i-1
        for(int j = 0;j<=n-i-1;j++){
            cout<<" "<<" ";
        }
        //Num1 print
        for(int j = 1;j<=i+1;j++){
            cout<<j<<" ";
        }
        //Num 2 Print
        // for(int j = 0;j<=i-1;j++){
        for(int j = i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
