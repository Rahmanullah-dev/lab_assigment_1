#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num, digits = 0, temp = num, sum = 0;

    while (temp > 0) {          
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {          
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == original;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is NOT an Armstrong number." << endl;
    return 0;
}
