//
// Created by subin on 2025. 10. 1..
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

}
/* 이 방법은 시간초과 (피보나치를 주어진 함수 사용)
int zero_cnt = 0;
int one_cnt = 0;

int fibonacci(int n) {
    if (n == 0) {
        zero_cnt++;
        return 0;
    }
    if (n == 1) {
        one_cnt++;
        return 1;
    }

    int a = n - 1;
    int b = n - 2;
    return fibonacci(a) + fibonacci(b);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    int arr[T];

    for (int i = 0 ; i < T ; i++) {
        cin >> arr[i];

        fibonacci(arr[i]);
        cout << zero_cnt << ' ' << one_cnt << '\n';

        zero_cnt = 0;
        one_cnt = 0;
    }

}
*/