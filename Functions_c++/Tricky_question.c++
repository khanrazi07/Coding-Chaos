// question is that to break or getting out from infinite loop using switch case without using break in loop
#include <iostream>
using namespace std;
int main(){
    int i = 1;
    while(1){
        switch(1){
            case 1 : cout<<"Infinite"<<endl;
            /* code */break;//without this line program will go into infinite loop.
            if(1){
                i++;
            }
                     
                       

            
        }
    }
}