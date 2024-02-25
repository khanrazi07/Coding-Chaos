// here we are doing the conditional statements
#include<iostream>
using namespace std;
//************************************************************************************************************************************
/*int main(){
    //int a = 10, b=20;
    int a;
    int b;
    cin >> a;
    cin >> b;
    if(a > b){
        cout << "hey b is greater then a"<< b << endl;
    }else{
        cout << "hey a is greater then b"<< a << endl;
    }
}*/
// with the help of cin.get() we can get the value in the input of tab , enter, space .
// now we get a number form user and then write to check that it  is negative positive or a zero

//************************************************************************************************************************************

/*int main(){
    int a , b;
    cout<< "Enter the number a"<< endl;
    cin>> a ;
    cout<< "enter the number b"<< endl;
    cin>>b;
    if (a > b){
        cout << "number a is greater than number b"<<endl;
    }
    else if (a < b) {
        cout << "number a is less than number b"<<endl;
    }
}
*/
//************************************************************************************************************************************
/*int main(){
    int a ;
    cout<<"Enter a Number" << endl;
    cin >> a;
    if(a > 0){
        cout << "Your entered number is Positive" << endl;
    }
    else if (a == 0) {
        cout << "Your Entered number is Zero" << endl;
    }
    else {
        cout << "Your Entered Number is Negative"<<endl;
        }



}
*/
//************************************************************************************************************************************
int main(){
    char a ;
    cout<< "Enter any Key" << endl;
    cin>> a ;
    if (a  >= 67 && a <= 90){
        cout << a << "This is Upper Case Letter"<< endl;
    }
    else if (a >= 97 && a <=122 ){
        cout << a << ":"<< "This is Lower Case Letter"<< endl;
    }
    else if(a >=48 && a<= 57){
        cout << a <<":"<< "This is Digit"<< endl;
    }else{          
        cout << a <<":"<< "This is Special Character"<< endl;}
   return 0;
    
}
