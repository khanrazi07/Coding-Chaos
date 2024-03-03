#include <iostream>
using namespace std;

// here we are maing a function to calculating the power for the given number

int power(int base , int exponent){
    int ans = 1;
    for(int i = 1 ; i <= exponent ; i++){
        ans = ans * base ;

    }
    return ans;
}

int main(){
    int base, exponent ;
    cin>> base >> exponent ; // taking input from user

    int answer = power(base,exponent); // calling the function and passing the values of 'a' and 'b' as arguments;
                // it will calculate the result and store in variable "ans" which is returned by the function.
                // the result will be stored in the variable 'ans' which is returned by the function.
    cout<<"The Answer is: "<<answer<<endl;
    
   /* you can also use this way of calling the function and storing the answer in another variable
    int ans = power(base , exponent);
    cout<<"The Answer is " << ans << endl; */

    return 0;
}