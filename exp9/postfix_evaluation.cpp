#include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp;
    cin >> exp;

    stack<int> s;

    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];

        // if digit, push to stack
        if (isdigit(c)) {
            s.push(c - '0');
        }
        // operator
        else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();

            if (c == '+') s.push(a + b);
            else if (c == '-') s.push(a - b);
            else if (c == '*') s.push(a * b);
            else if (c == '/') s.push(a / b);
        }
    }

    cout << "Result: " << s.top();

    return 0;
}
