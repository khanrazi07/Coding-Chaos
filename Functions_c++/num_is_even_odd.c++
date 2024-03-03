// here we are creating a functio where we check that the number is even or odd;
#include <iostream>
using namespace std;

int even_odd(int num){

    if (num % 2 == 0) {
        cout<<"Even";
    } else {
        cout<<"Odd";
    }
}

int main(){
    
    int num;
    cout<<"Enter  an integer: ";
    cin>>num;

    
    return 0;
}
