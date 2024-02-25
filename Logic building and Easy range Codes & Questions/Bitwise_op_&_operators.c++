// these are the bitwise operators ---->> (&) And , (|)  Or, (^) Xor
// we will use them to set and clear individual bits in a byte.
// (~)this is the not operator
// Now we are implmenting all the operators one by one and we are going thorugh the all operators
#include <iostream>
using namespace std;
int main() {
    int a = 6;
    int b = 4;
    //OR operation: it gives us the value of either one or both operands. In this
    cout<< (a|b) << endl;
    cout<< (~a) << endl;
    cout<< (a^b) << endl;
    cout<< (a&b) << endl;
    // now here we are learing some shifts  which are used for left shift and right shift operations.
    //cout<<(17>>1);
    //cout<<(17<<1);


    // Now we are going to use increment and decrement order

    // i++ ,++i , i-- , --i
    // postfix means after the operation is done what value does it hold?
    // prefix means before the operation is done what value does it hold?
    int c=7;
    cout<<(c++);
    cout<<(++c);
    cout<<(--c);
    cout<<(c--);



}
