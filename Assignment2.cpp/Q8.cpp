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

    for (int i = 0; i < n; i++) {
        bool distinct = true;

        
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                distinct = false;
                break;
            }
        }

        if (distinct) {
            count++;
        }
    }

    cout << "Total number of distinct elements: " << count;

    return 0;
}