#include <iostream>
using namespace std;

    // we are writing a program to print the sum of number from 1 to n using for loop?
    // int n ;
    // cout<<"Enter a Number "<< endl;  
    // cin>>n;
    // int sum = 0;
    // for(int i = 1 ; i<=n ;i++){
    //     //sum = sum + i;
    //     sum +=i;

    // }
    // cout<<sum<<endl;

    // Now we are going to prit the fibonacci series of the given n number
    // int n;
    // cout<<"Enter the value of n: ";
    // cin >> n;
    // int a = 0;
    // int b = 1;
    // cout<<a<<":"<<b<<":";
    // for(int i=0; i<n; i++){
    //     int nextnum = a + b;
    //     cout<<nextnum<<":";
    //     a = b;
    //     b = nextnum;
        
    // }
// int main(){
//     // here we are making a pprogram to check that a given number is prime number or not
//     int num;
//     cout<<"Enter the number: "<<endl;
//     cin>>num;
//     bool IsPrime = 1;
//     for(int i = 2 ; i<num ; i++ ){
//         if  (num % i == 0){
//             cout << "The number is Not Prime" << endl;
//             IsPrime = 0;
//             break;
//         }
//         else{}
//     }
//     if(IsPrime == 1){
//         cout<<"The given number "<<num<< " a prime Number"<<endl;
 
//     }
//     else if(IsPrime==0) {
//         cout<<"The given number "<<num<< " is not a Prime Number"<<endl;
//     }

// }    
//varibales and the scoping here is the some examples
int main(){
    int a = 2;
    cout<<a%10<<endl;// it gives the Garbage value  because variable 'a' has not been initialized.
    
    
                   // so, in order to use any variable you have to initialize them first.
    
}
//operators precedence 