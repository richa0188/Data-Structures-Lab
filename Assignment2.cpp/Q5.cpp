//a.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of matrix: ";
    cin >> n;

    int a[100];

    cout << "Enter diagonal elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Diagonal Matrix:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                cout << a[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
//b.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of matrix: ";
    cin >> n;

    int a[100];

    cout << "Enter " << 3 * n - 2 << " elements:" << endl;

    for (int i = 0; i < 3 * n - 2; i++) {
        cin >> a[i];
    }

    int k = 0;

    cout << "Tri-diagonal Matrix:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j || i == j + 1 || j == i + 1) {
                cout << a[k++] << " ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
//c.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of matrix: ";
    cin >> n;

    int a[100];

    int total = n * (n + 1) / 2;

    cout << "Enter " << total << " elements:" << endl;

    for (int i = 0; i < total; i++) {
        cin >> a[i];
    }

    int k = 0;

    cout << "Lower Triangular Matrix:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i >= j)
                cout << a[k++] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
//d.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of matrix: ";
    cin >> n;

    int a[100];

    int total = n * (n + 1) / 2;

    cout << "Enter " << total << " elements:" << endl;

    for (int i = 0; i < total; i++) {
        cin >> a[i];
    }

    int k = 0;

    cout << "Upper Triangular Matrix:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i <= j)
                cout << a[k++] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
//e.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int a[100];

    // Store only upper triangular elements
    int k = 0;

    cout << "Enter upper triangular elements:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cin >> a[k];
            k++;
        }
    }

    // Display symmetric matrix
    cout << "Symmetric Matrix:" << endl;

    k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i <= j) {
                // Upper triangle
                int index = i * n - (i * (i - 1)) / 2 + (j - i);
                cout << a[index] << " ";
            }
            else {
                
                int index = j * n - (j * (j - 1)) / 2 + (i - j);
                cout << a[index] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}