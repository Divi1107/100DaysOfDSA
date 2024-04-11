#include <iostream>
using namespace std;

int main() {
    int num, oddSum = 0, evenSum = 0;
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        num /= 10;
    }

    cout << evenSum <<" ";
    cout  << oddSum ;

    return 0;
}
