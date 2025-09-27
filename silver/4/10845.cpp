//
// Created by subin on 2025. 9. 27..
//
// 앞에서 풀었던 10828의 queue버전...

#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> q;
    string command;
    int num;
    int result;

    for (int i = 0; i < N; i++) {
        cin >> command;

        if (command == "push") {
            cin >> num;
            q.push(num);
        }

        if (command == "pop") {
            if (q.empty()) {
                result = -1;
                cout << result << "\n";
            }
            else {
                result = q.front();
                cout << result << "\n";
                q.pop();
            }
        }

        if (command == "size") {
            result = q.size();
            cout << result << "\n";
        }

        if (command == "empty") {
            if (q.empty()) {
                result = 1;
            }
            else {
                result = 0;
            }
            cout << result << "\n";
        }

        if (command == "front") {
            if (q.empty()) {
                result = -1;
            }
            else {
                result = q.front();
            }
            cout << result << "\n";
        }

        if (command == "back") {
            if (q.empty()) {
                result = -1;
            }
            else {
                result = q.back();
            }
            cout << result << "\n";
        }
    }
}