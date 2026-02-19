//
// Created by subin on 2025. 12. 20..
//
#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, K;
    cin >> N >> M;
    K = N * M / 4;
    int k = 1;

    int area[K];
    int arr[N][M];

     for (int i = 0; i < N; i++) {
         for (int j = 0; j < M; j++) {
             arr[i][j] = 0;
         }
     }

     for (int i = 0; i < N; i++) {
         for (int j = 0; j < M; j++) {
                 if (arr[i][j] == 0 && arr[i][M-j-1] == 0 && arr[N-i-1][j] == 0 && arr[N-i-1][M-j-1] == 0) {
                     arr[i][j] = k;
                     arr[i][M-j-1] = k;
                     arr[N-i-1][j] = k;
                     arr[N-i-1][M-j-1] = k;
                     k++;
                 }
             if (k > K) {
                 break;
             }
         }
     }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}