#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int key;
    bool found = false;

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter value to search: ";
    cin >> key;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            cout << key << " found at index " << i
                 << " (position " << i + 1 << ")" << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << key << " not found in the array." << endl;
    return 0;
}
