
//a.
#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100];

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        sum = sum + a[i];
    }

    int missing = total - sum;

    cout << "Missing number is: " << missing;

    return 0;
}
//b.
#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100];

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter " << n - 1 << " elements in sorted order: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }

    int low = 0;
    int high = n - 2;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == mid + 1) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << "Missing number is: " << low + 1;

    return 0;
}