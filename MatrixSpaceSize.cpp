#include <iostream>
#include "bigint.h"
using namespace std;

BigInt spaceSize(BigInt size) {
    if (size < 1) return 0;
    if (size == 1) return 2;
    if (size == 2) return 6;
    return (BigInt(6) + BigInt(6) * (spaceSize(size - BigInt(1)) - BigInt(2)));
}

int main() {
    BigInt blevel=0;
    int level;
    do {
        cout << "Input levels:";
        cin >> level;
        blevel = level;


        cout << "Matrix Space of " << level << " levels is " << spaceSize(blevel) << " nodes." << endl;

    } while (level >= 1);
}
