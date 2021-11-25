#include "function.h"

int main()
{
    int n;

    cout << "Type a number: ";
    cin >> n;

    cout << "The value " << n << " is an " << checkOddEven(n) << " number.";

    return 0;
}