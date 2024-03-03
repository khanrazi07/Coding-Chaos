#include <iostream>
using namespace std;
int main(){
    int a , b;
    char operation;
    
    cout<<"Enter the first   number a: "<<endl;
    cin>>a;
    
    cout<<"Enter the second number b: "<<endl;
    cin>>b;
    
    cout<<"enter the operation you want to perform"<<endl;
    cin>>operation;
    
    switch(operation) {
        case '+':cout <<  "The sum is : " << (a + b);
                 break;
        case '-':cout << "The subtraction result is : " << (a - b);
                 break;
        case '*':cout << "The multiplication result is : " << (a * b );
                 break;
        case '/':cout<< "The divide result is : "<<(a/b);
                 break;
        case '%':cout<< "The modulus result is : "<<(a%b);
                 break;
        default:cout<<"Invalid Operation";
    
    }
    return 0;
}