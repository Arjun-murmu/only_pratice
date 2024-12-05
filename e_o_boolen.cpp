//Even odd number even = 0 odd = 1 using boolen function
#include <iostream>
using namespace std;

int main() {

    int number;
    cin>>number;
    
    bool result = (number%2 == 1);
    cout<<result;
  
    return 0;
}
