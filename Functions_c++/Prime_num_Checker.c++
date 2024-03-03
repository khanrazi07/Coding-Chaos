// this functions shows that a given number is prime or not
#include <iostream>
using namespace std;

// 1----> prime
// 0----> not Prime

bool isPrime(int num){
    
    for(int i = 2 ; i<num ; i++){
        if( num % i == 0){
            return 0;
        }

    }
    return 1;
}

int main(){
    int num;
    cout<<"Enter the Number: "<<endl;
    cin>>num;

    if  (isPrime(num) == 1) {
        cout << "\nThe Given Number Is Prime";
    } else{
        cout << "\nThe Given Number Is Not Prime";
    }
  
    
}