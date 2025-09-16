//
// Created by subin on 2025. 9. 16..
//

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string ps;
    int T;
    cin >> T;


    for (int i = 0; i < T; i++) {
        stack<char> s;
        string is_vps = "YES";
        cin >> ps;

        for (int j = 0; j < ps.size(); j++) {
            if (ps[j] == '(') {
                s.push('(');
            }
            else if (ps[j] == ')') {
                if (!s.empty()) {
                    s.pop();
                }
                else {
                    is_vps = "NO";
                }
            }
        }

        if (!s.empty()) {
            is_vps = "NO";
        }

        cout << is_vps << '\n';
    }
}