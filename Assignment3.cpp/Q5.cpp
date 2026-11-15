#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int value) {
    top++;
    stack[top] = value;
}

int pop() {
    return stack[top--];
}

int main() {
    string postfix;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    for (int i = 0; i < postfix.length(); i++) {

        char ch = postfix[i];

        
        if (isdigit(ch)) {
            push(ch - '0');
        }

        
        else {
            int b = pop();
            int a = pop();

            switch (ch) {
                case '+':
                    push(a + b);
                    break;

                case '-':
                    push(a - b);
                    break;

                case '*':
                    push(a * b);
                    break;

                case '/':
                    push(a / b);
                    break;

                case '^':
                    push(pow(a, b));
                    break;
            }
        }
    }

    cout << "Result: " << pop();

    return 0;
}