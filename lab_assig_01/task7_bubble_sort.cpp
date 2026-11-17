// Task 7: Bubble sort (ascending order)
#include <iostream>
using namespace std;

int main() {
    int arr[10];

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array (ascending): ";
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
