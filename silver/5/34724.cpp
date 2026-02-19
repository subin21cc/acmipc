//
// Created by subin on 2025. 12. 20..
//
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> v;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int result = 0;

    for (int i = 0; i < N; i++) {
        vector<int> vv;
        string s;
        cin >> s;
        for (int j = 0; j < M; j++) {
            vv.push_back(s[j]-'0');
        }
        v.push_back(vv);
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < M - 1; j++) {
            if (v[i][j] == 1 && v[i][j+1] == 1 && v[i+1][j] == 1 && v[i+1][j+1] == 1) {
                result = 1;
            }
        }
    }

    cout << result << "\n";
}