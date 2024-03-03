#include <iostream>
using namespace std;
// Here we are doing some switch cases and after that we will do the functions part

int main() {

  int num = 1;
  char ch = 'a';

  cout<<endl;
  switch(num){// we can also use character here  instead of integer.
    case 1 : cout<<"First"<<endl;
    break;

    case 2 : switch(ch){
      case 'a' : cout<<"Char is a"<<endl;break;
    } // nested switch case
    break;

    default : cout<<"It is default case"<<endl; // it will run if the value didnt match at all . supose we have a number 10 as num then it will go to the default case
    
  }
  cout<<endl;
  return 0;


  
  
}