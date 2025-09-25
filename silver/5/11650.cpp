//
// Created by subin on 2025. 9. 25..
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> pairs(n);

    for (int i = 0; i < n; ++i) {
        cin >> pairs[i].first >> pairs[i].second;
    }

    sort(pairs.begin(), pairs.end()); // 기본적으로 오름차순 정렬

    for (const auto& p : pairs) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
