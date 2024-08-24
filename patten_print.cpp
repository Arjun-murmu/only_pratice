#include <iostream>
using namespace std;

void print_pattern1(int n){
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*"<<" ";
        }
    cout<<"\n";
    }
}
void print_Pattern4(int n) {
    for(int k = 1; k <= n; k++) {
        for(int l = 1; l <= k; l++) {
            cout << l << " ";
        }
        cout << "\n";
    }
}
void print_Pattern5(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = i; j >= 1; j--) {
            cout << i << " ";
        }
        cout << "\n";
    }
}
void print_Pattern6(int n){
    for(int i = 0;i<=2*n;i++){
        int tot_cal_row = i >= n ? 2*n-i-1 : i;
        for(int j = 0;j<=tot_cal_row;j++){
            cout<<"*"<<" ";
        }
    cout<<"\n";
    }
}
void print_Pattern7(int n){
    for(int i = 0;i<=2*n;i++){
        int tot_cal_row = i > n ? 2*n-i: i;
        for(int j = 0;j<=tot_cal_row;j++){
            cout<<"*"<<" "<<j;
        }
    cout<<"\n";
    }
}
void print_Pattern8(int n){
    for(int i = 0;i<=2*n;i++){
        int tot_cal_row = i > n ? 2*n-i: i;
        int number_of_spaces = n-tot_cal_row;
        for(int s = 0;s<number_of_spaces;s++){
            cout<<" ";
        }
        for(int j = 0;j<=tot_cal_row;j++){
            cout<<"*"<<" ";
        }
    cout<<"\n";
    }
}


int main() {
    int n;

   // cout << "Enter a number: ";
    //cin >> n;
    n =5;
    cout<<"Patten 1 (*) : \n";
    print_pattern1(n);
    cout<<endl;
    cout << "print_Pattern4:\n";
    print_Pattern4(n);
    cout<<endl;
    cout << "pattern5: \n";
    print_Pattern5(n);
    cout<<endl;
    cout<<"print_Pattern6 : \n";
    print_Pattern6(n);
    cout<<endl;
    cout<<"print_Pattern7 : \n";
    print_Pattern7(n);
    cout<<endl;
    cout<<"print_Pattern8 : \n";
    print_Pattern8(n);
    cout<<endl;
    

    return 0;
}
