//
// Created by subin on 2025. 9. 27..
//

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, M, card;
    int arr[500001];
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // nullptr대신 0도 가능하지만 최근 nullptr이 권장
    // cin과 cout의 tie를 끊음
    // -> 입력을 받을 때마다 출력버퍼를 자동으로 flush(비움)하지 않게 함
    // -> 입출력 속도 빨라짐

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N); // qsort보다 sort가 빠름

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> card;
        cout << upper_bound(arr, arr + N, card) - lower_bound(arr, arr + N, card) << " ";
        // upper_bound:  card 이상인 값이 처음 등장하는 위치(가장 왼쪽에 있는 위치)를 반환
        // lower_bound: card를 초과하는 값이 처음 등장하는 위치(가장 왼쪽에 있는 위치)를 반환
        // 차이: card 값이 몇 번 등장하는지의 개수
    }

}

/*
 이 방식은 시간초과..
int main() {
    int N, M;
    int cnt = 0;

    cin >> N;
    int have_cards[N];

    for (int i = 0; i < N; i++) {
        cin >> have_cards[i];
    }

    cin >> M;
    int check_nums[M];

    for (int i = 0; i < M; i++) {
        cin >> check_nums[i];
        for (int j = 0; j < N; j++) {
            if (check_nums[i] == have_cards[j]) {
                cnt++;
            }
        }
        cout << cnt << " ";
        cnt = 0;
    }
}
*/