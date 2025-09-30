//
// Created by subin on 2025. 9. 30..
//

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, x;
    string cmd;
    int arr[21] = {0};

    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> cmd;

        if (cmd == "add") {
            cin >> x;
            if (arr[x] == 0) {
                arr[x] = 1;
            }
        }

        if (cmd == "remove") {
            cin >> x;
            if (arr[x] == 1) {
                arr[x] = 0;
            }
        }

        if (cmd == "check") {
            cin >> x;
            if (arr[x] == 1) {
                cout << "1" << '\n';
            }
            else {
                cout << "0" << '\n';
            }
        }

        if (cmd == "toggle") {
            cin >> x;
            if (arr[x] == 1) {
                arr[x] = 0;
            }
            else {
                arr[x] = 1;
            }
        }

        if (cmd == "all") {
            for (int i = 1; i < 21; i++) {
                arr[i] = 1;
            }
        }

        if (cmd == "empty") {
            for (int i = 1; i < 21; i++) {
                arr[i] = 0;
            }
        }
    }
}