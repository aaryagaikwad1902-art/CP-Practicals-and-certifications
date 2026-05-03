#include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp;
    cin >> exp;

    stack<char> s;
    bool ok = true;

    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];

        // opening brackets
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        }
        // closing brackets
        else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) {
                ok = false;
                break;
            }

            char top = s.top();
            s.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                ok = false;
                break;
            }
        }
    }

    if (!s.empty())
        ok = false;

    if (ok)
        cout << "Valid Expression";
    else
        cout << "Invalid Expression";

    return 0;
}
