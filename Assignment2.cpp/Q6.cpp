//a.
#include <iostream>
using namespace std;

int main() {
    int a[100][3], transpose[100][3];

    int rows, cols, nonZero;

    cout << "Enter number of rows, columns and non-zero elements: ";
    cin >> rows >> cols >> nonZero;

    a[0][0] = rows;
    a[0][1] = cols;
    a[0][2] = nonZero;

    cout << "Enter row, column and value of non-zero elements:" << endl;

    for (int i = 1; i <= nonZero; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    // First row of transpose
    transpose[0][0] = cols;
    transpose[0][1] = rows;
    transpose[0][2] = nonZero;

    int k = 1;

    // Interchange row and column
    for (int j = 0; j < cols; j++) {
        for (int i = 1; i <= nonZero; i++) {

            if (a[i][1] == j) {
                transpose[k][0] = a[i][1];
                transpose[k][1] = a[i][0];
                transpose[k][2] = a[i][2];
                k++;
            }
        }
    }

    cout << "Transpose:" << endl;

    for (int i = 0; i <= nonZero; i++) {
        cout << transpose[i][0] << " "
             << transpose[i][1] << " "
             << transpose[i][2] << endl;
    }

    return 0;
}
//b.
#include <iostream>
using namespace std;

int main() {
    int A[100][3], B[100][3], C[200][3];

    int r1, c1, n1;
    int r2, c2, n2;

    cout << "Enter rows, columns and non-zero elements of Matrix A: ";
    cin >> r1 >> c1 >> n1;

    A[0][0] = r1;
    A[0][1] = c1;
    A[0][2] = n1;

    cout << "Enter triplets of Matrix A:" << endl;

    for (int i = 1; i <= n1; i++) {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    }

    cout << "Enter rows, columns and non-zero elements of Matrix B: ";
    cin >> r2 >> c2 >> n2;

    B[0][0] = r2;
    B[0][1] = c2;
    B[0][2] = n2;

    cout << "Enter triplets of Matrix B:" << endl;

    for (int i = 1; i <= n2; i++) {
        cin >> B[i][0] >> B[i][1] >> B[i][2];
    }

    if (r1 != r2 || c1 != c2) {
        cout << "Addition not possible.";
        return 0;
    }

    int i = 1, j = 1, k = 1;

    while (i <= n1 && j <= n2) {

        if (A[i][0] == B[j][0] &&
            A[i][1] == B[j][1]) {

            int sum = A[i][2] + B[j][2];

            if (sum != 0) {
                C[k][0] = A[i][0];
                C[k][1] = A[i][1];
                C[k][2] = sum;
                k++;
            }

            i++;
            j++;
        }

        else if (A[i][0] < B[j][0] ||
                (A[i][0] == B[j][0] &&
                 A[i][1] < B[j][1])) {

            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];

            i++;
            k++;
        }

        else {
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = B[j][2];

            j++;
            k++;
        }
    }

    while (i <= n1) {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = A[i][2];

        i++;
        k++;
    }

    while (j <= n2) {
        C[k][0] = B[j][0];
        C[k][1] = B[j][1];
        C[k][2] = B[j][2];

        j++;
        k++;
    }

    C[0][0] = r1;
    C[0][1] = c1;
    C[0][2] = k - 1;

    cout << "Addition of matrices:" << endl;

    for (int i = 0; i < k; i++) {
        cout << C[i][0] << " "
             << C[i][1] << " "
             << C[i][2] << endl;
    }

    return 0;
}
//c.
#include <iostream>
using namespace std;

int main() {
    int A[100][3], B[100][3], C[100][3];

    int r1, c1, n1;
    int r2, c2, n2;

    cout << "Enter rows, columns and non-zero elements of Matrix A: ";
    cin >> r1 >> c1 >> n1;

    A[0][0] = r1;
    A[0][1] = c1;
    A[0][2] = n1;

    cout << "Enter triplets of Matrix A:" << endl;

    for (int i = 1; i <= n1; i++) {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    }

    cout << "Enter rows, columns and non-zero elements of Matrix B: ";
    cin >> r2 >> c2 >> n2;

    B[0][0] = r2;
    B[0][1] = c2;
    B[0][2] = n2;

    cout << "Enter triplets of Matrix B:" << endl;

    for (int i = 1; i <= n2; i++) {
        cin >> B[i][0] >> B[i][1] >> B[i][2];
    }

    if (c1 != r2) {
        cout << "Multiplication not possible.";
        return 0;
    }

    
    int X[20][20] = {0};
    int Y[20][20] = {0};

    for (int i = 1; i <= n1; i++) {
        X[A[i][0]][A[i][1]] = A[i][2];
    }

    for (int i = 1; i <= n2; i++) {
        Y[B[i][0]][B[i][1]] = B[i][2];
    }

    int Z[20][20] = {0};

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                Z[i][j] += X[i][k] * Y[k][j];
            }
        }
    }


    int count = 0;

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            if (Z[i][j] != 0) {
                count++;
            }
        }
    }

    C[0][0] = r1;
    C[0][1] = c2;
    C[0][2] = count;

    int p = 1;

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {

            if (Z[i][j] != 0) {
                C[p][0] = i;
                C[p][1] = j;
                C[p][2] = Z[i][j];
                p++;
            }
        }
    }

    cout << "Multiplication of matrices:" << endl;

    for (int i = 0; i <= count; i++) {
        cout << C[i][0] << " "
             << C[i][1] << " "
             << C[i][2] << endl;
    }

    return 0;
}

