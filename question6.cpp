#include <iostream>
using namespace std;
int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;

    int Digit = n % 10;
    rev = rev * 10 + Digit;
    return reverseNumber(n / 10, rev);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed number: " << reverseNumber(n) << endl;
    return 0;
}
