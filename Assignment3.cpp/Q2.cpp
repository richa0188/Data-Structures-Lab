#include <iostream>
#include <string>
using namespace std;

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char ch) {
    if (top == SIZE - 1) {
        cout << "Stack is Full!" << endl;
    }
    else {
        top++;
        stack[top] = ch;
    }
}

char pop() {
    if (top == -1) {
        return '\0';
    }
    else {
        return stack[top--];
    }
}

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        push(str[i]);
    }

    cout << "Reversed string: ";

    
    while (top != -1) {
        cout << pop();
    }

    return 0;
}