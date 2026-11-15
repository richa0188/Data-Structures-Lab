#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;

    // Count inversions
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (a[i] > a[j]) {
                count++;
            }
        }
    }

    cout << "Number of inversions: " << count;

    return 0;
}