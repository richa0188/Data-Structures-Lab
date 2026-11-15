//a.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    str1 = str1 + str2;

    cout << "Concatenated string: " << str1;

    return 0;
}
//b.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Reversed string: ";

    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}
//c.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "String after deleting vowels: ";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') {

            cout << str[i];
        }
    }

    return 0;
}
//d.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str[100];

    cout << "Enter number of strings: ";
    cin >> n;

    cout << "Enter strings:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (str[j] > str[j + 1]) {
                string temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "Strings in alphabetical order:" << endl;

    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }

    return 0;
}
//e.
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter an uppercase character: ";
    cin >> ch;

    ch = tolower(ch);

    cout << "Lowercase character: " << ch;

    return 0;
}