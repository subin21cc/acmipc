//
// Created by subin on 2025. 12. 20..
//
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int P, M, C, X;
    cin >> P >> M >> C;
    cin >> X;

    int min = abs((P + M) * (M + C) - X);

    for (int p = 1; p <= P; p++) {
        for (int m = 1; m <= M; m++) {
            for (int c = 1; c <= C; c++) {
                if (abs((p + m) * (m + c) - X) < min) {
                    min = abs((p + m) * (m + c) - X);
                }
            }
        }
    }
    cout << min << "\n";
}