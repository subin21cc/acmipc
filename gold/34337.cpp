// //
// // Created by subin on 2025. 12. 20..
// //
// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//
//     int jb[7] = {0,};
//     int input[5];
//
//     for (int i = 0; i < 5; i++) {
//         cin >> input[i];
//     }
//
//     for (int i = 1; i <= 7; i++) {
//         for (int j = 0; j < 5; j++) {
//             if (input[j] == i) {
//                 jb[i] += i;
//             }
//         }
//     }
//
//     if (input[0] == input[1] && input[1] == input[2] && input[2] == input[3] && input[3] == input[4]) {
//         cout << "50" << endl;
//     }
//     else {
//         int lenght = sizeof(jb) / sizeof(jb[0]);
//         int max = *max_element(jb, jb + lenght);
//
//         cout << max << endl;
//     }
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// 전역 변수: 입력받은 주사위 정보 저장
int initial_dice[5];

// 6의 거듭제곱을 미리 저장 (6^0 ~ 6^5)
long long powers_of_6[6] = {1, 6, 36, 216, 1296, 7776};

// 현재 주사위 5개의 상태에서 얻을 수 있는 최대 점수 계산
int get_score(const vector<int>& dice) {
    int counts[7] = {0};
    int max_s = 0;

    for (int d : dice) counts[d]++;

    // 1. Ones ~ Sixes 점수 계산
    for (int i = 1; i <= 6; i++) {
        max_s = max(max_s, counts[i] * i);
    }

    // 2. Yacht 점수 계산 (5개 모두 같은 경우)
    for (int i = 1; i <= 6; i++) {
        if (counts[i] == 5) {
            max_s = max(max_s, 50);
            break; // 이미 Yacht면 더 볼 필요 없음
        }
    }

    return max_s;
}

// 재귀함수(DFS): 다시 던지기로 한 주사위(reroll_indices)들의 모든 결과를 탐색
// current_dice: 현재 주사위 상태
// reroll_indices: 다시 던져야 할 주사위들의 인덱스 목록
// depth: 현재 몇 번째 다시 던지는 주사위를 결정 중인지
void dfs(vector<int>& current_dice, const vector<int>& reroll_indices, int depth, long long& sum_score) {
    // 모든 주사위의 눈이 결정된 경우 (Base Case)
    if (depth == reroll_indices.size()) {
        sum_score += get_score(current_dice);
        return;
    }

    // 현재 처리 중인 주사위 인덱스
    int idx = reroll_indices[depth];

    // 1부터 6까지 모든 눈이 나오는 경우를 탐색
    for (int val = 1; val <= 6; val++) {
        current_dice[idx] = val;
        dfs(current_dice, reroll_indices, depth + 1, sum_score);
    }
}

int main() {
    // 입출력 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 5; i++) {
        cin >> initial_dice[i];
    }

    long long max_ans = 0;

    // 비트마스킹을 이용해 32가지(2^5)의 Keep/Reroll 조합 시도
    // 비트가 1이면 Keep, 0이면 Reroll
    for (int i = 0; i < (1 << 5); i++) {
        vector<int> current_dice(5);
        vector<int> reroll_indices;

        // 주사위 설정
        for (int j = 0; j < 5; j++) {
            if ((i >> j) & 1) {
                // Keep: 원래 주사위 값 유지
                current_dice[j] = initial_dice[j];
            } else {
                // Reroll: 나중에 DFS로 값 결정, 일단 인덱스 저장
                reroll_indices.push_back(j);
            }
        }

        long long current_sum = 0;

        // 다시 던져야 할 주사위들에 대해 모든 경우의 수(6^k) 탐색 및 점수 합산
        dfs(current_dice, reroll_indices, 0, current_sum);

        // 결과 보정: 총합 * 6^(5 - k)
        int k = reroll_indices.size(); // 다시 던진 주사위 개수
        long long final_val = current_sum * powers_of_6[5 - k];

        if (final_val > max_ans) {
            max_ans = final_val;
        }
    }

    cout << max_ans << "\n";

    return 0;
}