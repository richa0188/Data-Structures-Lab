#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char ch) {
    top++;
    stack[top] = ch;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int precedence(char ch) {
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

int main() {
    string infix, postfix = "";

    cout << "Enter infix expression: ";
    cin >> infix;

    for (int i = 0; i < infix.length(); i++) {

        char ch = infix[i];

        
        if (isalnum(ch)) {
            postfix += ch;
        }

        
        else if (ch == '(') {
            push(ch);
        }

        
        else if (ch == ')') {

            while (top != -1 && peek() != '(') {
                postfix += pop();
            }

            pop();  
        }

    
        else {
            while (top != -1 &&
                   peek() != '(' &&
                   precedence(peek()) >= precedence(ch)) {

                postfix += pop();
            }

            push(ch);
        }
    }


    while (top != -1) {
        postfix += pop();
    }

    cout << "Postfix expression: " << postfix;

    return 0;
}