// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    cout<< "Hello sir!";
    int user_input;
    cout<<"\nEnter your password: ";
    cin>>user_input;
    int password = 89543;
    if(user_input == password){
        cout<<"Welcome sir.";
    }
    else{
        cout<<"Wrong Password.";
    }

    return 0;
}
