//
// Created by subin on 2025. 9. 30..
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v;
    vector<string> no_hear_see;
    string s;
    int N, M;
    int cnt = 0;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < M; i++) {
        cin >> s;
        // 이진 탐색
        // binary_search(v.begin(), v.end(), target)
        if (binary_search(v.begin(), v.end(), s)) {
            no_hear_see.push_back(s);
            cnt++;
        }
    }

    cout << cnt << '\n';

    sort(no_hear_see.begin(), no_hear_see.end());

    for (int i = 0; i < no_hear_see.size(); i++) {
        cout << no_hear_see[i] << '\n';
    }

}
