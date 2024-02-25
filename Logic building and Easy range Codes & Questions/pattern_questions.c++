#include<iostream>
using namespace std;
/*int main() {
    int n;
    int j;
    cin>> n ;
    int i = 1;
    while(i <= n) {
        int j ;
        j = n ;
        while (j<=n)
        {
            cout<<n - j +1;
            j = j+1;
            

        }
        cout<<endl;
        i = i +1;
    }    
}        
*/
//****************************************************************************************************************************************
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
            cout<<j;
            j=j+1;

        }
        cout<< endl;
        i = i + 3;
        

        
    }
}
*/
// int main(){
//     int n ;
//     cin>>n;
//     int row = 1;
//     while (row <= n){
//         int col = 1;
//         while (col<=row){
//             cout<<row + 1;
//             col = col + 1;

        
//         }
//         cout<<endl;
//         row = row + 1;       
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col<=n){
//             char value = 'A' + col + row-2;
//             cout<<value;
//             col = col + 1;

//         }
//         cout<<endl;
//         row = row + 1;
//     }

// }
// Output will be ----->
// ABCD
// BCDE
// CDEF
// DEFG



// int main(){
//     int n ;
//     cin>>n;
//     int row = 1;
//     while(row <= n){
//         int col = 1;
//         while(col<=row){
//             char ch = 'A' + row - 1 ;          OUTPUT -------->>>>A
//                                                                   BB
//                                                                 CCC
//             cout<<ch;
//             col=col + 1;

//         }
//         cout<<endl;
//         row = row + 1;
//     }
// }



int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            char value = 'A' + row - 1;
            cout<<value;
            value = value + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }

}