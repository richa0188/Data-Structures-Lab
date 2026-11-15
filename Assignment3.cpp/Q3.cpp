#include <iostream>
#include <string>
using namespace std;

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char ch) {
    if (top < SIZE - 1) {
        top++;
        stack[top] = ch;
    }
}

char pop() {
    if (top == -1)
        return '\0';

    return stack[top--];
}

int main() {
    string exp;

    cout << "Enter an expression: ";
    cin >> exp;

    bool balanced = true;

    for (int i = 0; i < exp.length(); i++) {

        if (exp[i] == '(') {
            push(exp[i]);
        }

        else if (exp[i] == ')') {
            if (top == -1) {
                balanced = false;
                break;
            }

            pop();
        }
    }

    if (top != -1) {
        balanced = false;
    }

    if (balanced)
        cout << "Parentheses are Balanced.";
    else
        cout << "Parentheses are Not Balanced.";

    return 0;
}