#include <iostream>
using namespace std;

int main() {
    int n, key;
    int a[100];

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    int found = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == key) {
            found = mid;
            break;
        }
        else if (key < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (found != -1) {
        cout << "Element found at position " << found + 1;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}