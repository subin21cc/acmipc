//
// Created by subin on 2025. 9. 25..
//

#include <iostream>
#include <vector>
#include <utility> // pair 선언
#include <algorithm>
using namespace std;

bool compare(pair<int, string> p1, pair<int, string> p2) {
    return (p1.first < p2.first); //return값은 bool이어야 함
}

int main(void) {
    int n;
    cin >> n;
    vector<pair<int,string>> vec;

    pair<int, string> p;

    for (int i = 0; i < n; i++) {
        int age;
        string name;

        cin >> age >> name;
        vec.push_back(make_pair(age, name));
    }

    stable_sort(vec.begin(), vec.end(), compare); // stable_sort는 입력 순서 보장 가능 !!

    for (int i = 0; i < n; i++) {
        cout << vec[i].first << ' ' << vec[i].second << '\n';
    }
}