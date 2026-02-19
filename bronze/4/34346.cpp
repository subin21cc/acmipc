//
// Created by subin on 2025. 12. 20..
//

#include <iostream>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "2" << endl;
    }
    else {
        cout << "1" << endl;
    }
}