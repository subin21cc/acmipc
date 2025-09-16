//
// Created by subin on 2025. 9. 15..
//

#include <queue>
#include <iostream>
using namespace std;

int main() {
    queue<int> q;   //int형 큐 선언

    int N, tmp;
    cin >> N;

    for (int i = 1; i < N + 1; i++) {
        q.push(i);
    }

    while (q.size() > 1) {
        q.pop();

        tmp = q.front();
        q.pop();
        q.push(tmp);
    }

    cout << q.front();
}