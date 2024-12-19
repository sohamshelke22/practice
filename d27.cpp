#include <iostream>

#include <stack>

#include <string>

using namespace std;



int precedence(char op) {

    if (op == '+' || op == '-') 

        return 1;

    if (op == '*' || op == '/') 

        return 2;

    return 0;

}



int applyOperation(int a, int b, char op) {

    switch (op) {

        case '+': return a + b;

        case '-': return a - b;

        case '*': return a * b;

        case '/': return a / b;

    }

    return 0;

}



string infixToPostfix(string infix) {

    stack<char> operators;

    string postfix = "";

    

    for (char ch : infix) {

        if (isalnum(ch)) {

            postfix += ch;

        } else {

            while (!operators.empty() && precedence(operators.top()) >= precedence(ch)) {

                postfix += operators.top();

                operators.pop();

            }

            operators.push(ch);

        }

    }

    while (!operators.empty()) {

        postfix += operators.top();

        operators.pop();

    }

    return postfix;

}



int evaluatePostfix(string postfix) {

    stack<int> operands;

    for (char ch : postfix) {

        if (isdigit(ch)) {

            operands.push(ch - '0');

        } else {

            int b = operands.top(); operands.pop();

            int a = operands.top(); operands.pop();

            int result = applyOperation(a, b, ch);

            operands.push(result);

        }

    }

    return operands.top();

}



int main() {

    string infixExpression;

    cout << "Enter infix expression (single character operands): ";

    cin >> infixExpression;

    

    string postfixExpression = infixToPostfix(infixExpression);

    cout << "Postfix Expression: " << postfixExpression << endl;

    cout << "Evaluation of Postfix Expression: " 

         << evaluatePostfix(postfixExpression) << endl;

    

    return 0;

}
