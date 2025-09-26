//
// Created by subin on 2025. 9. 26..
//

#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    string cmd;
    int num;
    int result = 0;
    stack<int> s;

    for (int i = 0; i < n; i++) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> num;
            s.push(num);
        }

        else if (cmd == "pop") {
            if (s.empty()) {
                result = -1;
                cout << result << "\n";
            }
            else {
                result = s.top();
                cout << result << "\n";
                s.pop();
            }
        }

        else if (cmd == "size") {
            result = s.size();
            cout << result << "\n";
        }

        else if (cmd == "empty") {
            if (s.empty()) {
                result = 1;
            }
            else {
                result = 0;
            }
            cout << result << "\n";
        }

        else if (cmd == "top") {
            if (s.empty()) {
                result = -1;
            }
            else {
                result = s.top();
            }
            cout << result << "\n";
        }
        // 여기서 일괄적으로 출력하면 되는 거 아닌가? 했지만 pop에서 출력하고 pop을 해야하기 때문에... 불가능
    }

}