// her ewe are going to covert the decimal number to the binary numbers
#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a decimal number: "<<endl;
    cin>>n;
    int answer = 0;
    int i = 0;
    while(n!=0){
        int bit = n&1;
        answer = (bit*pow(10,i)) + answer;
        n = n>>1;
        i++;


    }
   cout<<"The Binary representation of the given Decimal Number is : "<<answer<<endl;


}


// now we are writing the code to represt the negative binaryh number represetation..
