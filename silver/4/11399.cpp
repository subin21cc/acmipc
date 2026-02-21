//
// Created by subin on 2026. 2. 21..
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int P[N];
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    sort(P, P + N);

    int sum = 0;
    int cnt = N;
    for (int i = 0; i < N; i++) {
        sum += P[i] * cnt;
        cnt--;
    }

    cout << sum;
}