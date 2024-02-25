#include<iostream>
using namespace std;
//Printing the Numbers to N digit
/*int main() {
    int n ;
    cout<< "Enter a number "<< endl;
    cin >>n;
    int i = 1;
    while(i <= n ){
        cout<<  i <<" ";
        i = i + 1;
        }
    }
*/    
//************************************************************************************************************************************
/*
int main(){
    // pritnig the number to the n sum 
    int n ;
    cout<< "Enter the Number  of Digits you want : "<< endl;
    cin >>n;
    int i = 1;
    int sum = 0;
    while (i <= n) {
        sum = sum + i;
        i = i + 1;

}
cout << "The Sum is: " << sum << endl;
return 0;   
}
*/
//************************************************************************************************************************************
/*
int main(){
    // pritnig the sum of all even numbers
    int n ;
    cout<< "Enter the Number  of Digits you want : "<< endl;
    cin >>n;
    int i = 0;
    int sum = 0;
    while (i <= n) {
        sum = sum + i;
        i = i + 2;

}
cout << "The Sum all even number is: " << sum << endl;
return 0;   
}
*/
//****************************************************************************************************************************************
/* pattern question for 
******
******
******
******
******
******
*/
/*
int main(){
    int n ;
    cin >> n;
    int i;
    i = 1;
    while (i<=n)
    {
        int j = 1;
        while(j<=n){
            cout<<"*";
            j=j+1;

        }
        cout<< endl;
        i = i + 1;
         code 

        
    }
}    
*/
//****************************************************************************************************************************************

// pattern question for 
/*
11111
22222
33333
44444
55555
*/

int main(){
    int n ;
    cin >> n;
    int i;
    i = 1;
    while (i<=n)
    {
        int j = 1;
        while(j<=n){
            cout<< i;
            j=j+1;

        }
        cout<< endl;
        i = i + 1;
        /* code */
    
    
}
}