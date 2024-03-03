#include <iostream>
using namespace std;

namespace BitUtils {
    int countSetBits(int num) {
        int count = 0;
        while (num > 0) {
            count += num & 1; // Check if the least significant bit is set
            num >>= 1; // Right shift to check the next bit
        }
        return count;
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Number of set bits in a and b: " << BitUtils::countSetBits(a) + BitUtils::countSetBits(b)  << endl;


    return 0;
}
