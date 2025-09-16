//
// Created by subin on 2025. 9. 14..
//

#include <iostream>
#include <algorithm>
using namespace std;

int compare(const void* first, const void* second) {
    return (*(int*)first - *(int*)second);
}

//
int binary_search (int arr[], int size, int x)
{
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return 1;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}

int A[100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    // qsort(A, N, sizeof(A[0]), compare);
    sort(A, A + N);

    cin >> M;
    for (int i = 0; i < M; i++) {
        int B;
        cin >> B;
        cout << binary_search(A, N, B) << "\n";
    }
}